#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VRBPDatatypes.h"
#include "OnAnyContainerChangedDelegate.h"
#include "OnContainerAncestorChanged_ContainerDelegateDelegate.h"
#include "OnContainerChildrenChanged_ContainerDelegateDelegate.h"
#include "OnContainerParentChanged_ContainerDelegateDelegate.h"
#include "RadiusTickableWorldSubsystem.h"
#include "RadiusContainerSubsystem.generated.h"

class AActor;
class APlayerState;
class ARadiusItemBase;
class UItemContainerData;
class UObject;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusContainerSubsystem : public URadiusTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyContainerChanged OnAnyContainerChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UItemContainerData*> InventoryContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> HolstersAndHolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVRHand, UObject*> RelevantHandContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVRHand, UObject*> RelevantHandContainersForAttachedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVRHand, AActor*> ItemsInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVRHand, AActor*> HandToAttachedItem;
    
public:
    URadiusContainerSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterHolster(const FString& ContainerUid);
    
    UFUNCTION(BlueprintCallable)
    bool TryAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem);
    
    UFUNCTION(BlueprintCallable)
    void SetContainerTransform(const FString& ContainerID, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnbindOnContainerParentChanged(const FString& ContainerID, const FOnContainerParentChanged_ContainerDelegate& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnbindOnContainerChildrenChanged(const FString& ContainerID, const FOnContainerChildrenChanged_ContainerDelegate& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnbindOnContainerAncestorChanged(const FString& ContainerID, const FOnContainerAncestorChanged_ContainerDelegate& Event);

    UFUNCTION(BlueprintCallable)
    void RequestBindOnContainerParentChanged(const FString& ContainerID, const FOnContainerParentChanged_ContainerDelegate& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestBindOnContainerChildrenChanged(const FString& ContainerID, const FOnContainerChildrenChanged_ContainerDelegate& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestBindOnContainerAncestorChanged(const FString& ContainerID, const FOnContainerAncestorChanged_ContainerDelegate& Event);

    UFUNCTION(BlueprintCallable)
    void RemoveItemFromTrack(const EVRHand Hand);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachedItemFromTrack(const EVRHand Hand);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHolster(const FString& ContainerUid, UObject* ContainerObject);
    
    UFUNCTION(BlueprintCallable)
    bool PutItemToContainer(UObject* Container, AActor* ItemActor, const bool Silent);
    
    UFUNCTION(BlueprintCallable)
    void PrintContainersStructure();
    
    UFUNCTION(BlueprintCallable)
    void PlaceInsideContainer(UObject* Item, const FString& ParentContainerUid, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerContainerID(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConcretePlayerContainerID(const APlayerState* PlayerState, const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable)
    void InstantHolsterActor(UObject* Container, AActor* ItemActor, const bool Silent);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetWorldTransform(const FString& ContainerUid, const FTransform& InitialTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTopParentContainerID(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetParentContainerID(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable)
    UItemContainerData* GetOrCreateItemContainer(const FString& ContainerID, UObject* ContainerObject, const FString& ParentID, FTransform RelativeTransform, bool bUpdateContainerObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetMostRelevantContainer(const EVRHand Hand);
    
    UFUNCTION(BlueprintCallable)
    void GetItemContainerBP(const FString& ContainerID, bool& bFound, UItemContainerData*& ContainerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentLevelContainerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, UItemContainerData*> GetContainers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetContainerObject(const FString& ContainerID) const;
  
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllPlayerItems(AActor* Player, TArray<ARadiusItemBase*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARadiusItemBase*> GetAllChildItems(const FString& ParentContainerID) const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllChildContainerIDs(const FString& ParentContainerID, const bool bIncludeChildren) const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARadiusItemBase*> GetAllAncestorItems(const FString& ContainerID) const;

    UFUNCTION(BlueprintCallable, BlueprintPure = false)
    void FireOnPlayerContainerChanged(const FString& PlayerID, const FString& ParentID, const FString& ContainerID, const bool bHasAttached) const;

    UFUNCTION(BlueprintCallable)
    bool DropHolsteredActor(UObject* Container, AActor* Item);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> DropHolstered(UObject* Container);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem) const;
    
    UFUNCTION(BlueprintCallable)
    void AddItemToTrack(const EVRHand Hand, AActor* Item);
    
    UFUNCTION(BlueprintCallable)
    void AddContainerToContainer(const FString& ContainerID, const FString& ParentID, const FTransform RelativeTransform, const bool Silent);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachedItemToTrack(const EVRHand Hand, AActor* AttachedItem);
    
};

