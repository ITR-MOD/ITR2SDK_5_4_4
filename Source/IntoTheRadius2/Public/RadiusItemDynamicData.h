#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "AdditionalTagsVerified.h"
#include "ItemContainerInterface.h"
#include "OnTagChangedDelegate.h"
#include "OnValueChangedDelegate.h"
#include "OnValueChangedDeltaDelegate.h"
#include "RadiusItemStaticData.h"
#include "StackedItemsVerified.h"
#include "RadiusItemDynamicData.generated.h"

class AActor;
class ARadiusItemBase;
class URadiusItemDynamicData;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusItemDynamicData : public UObject, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString InstanceUid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<URadiusItemDynamicData*> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ContainingItemTagsStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ContainingShellsInStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize DynamicLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize DynamicRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ParentContainerUid, meta=(AllowPrivateAccess=true))
    FString ParentContainerUid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Durability, meta=(AllowPrivateAccess=true))
    float Durability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Upgrades;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueChanged OnStackChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueChangedDelta OnDurabilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTagChanged OnAdditionalTagChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueChanged OnParentIDChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChamberAmmos, meta=(AllowPrivateAccess=true))
    FStackedItemsVerified StackedItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AdditionalTags, meta=(AllowPrivateAccess=true))
    FAdditionalTagsVerified AdditionalTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalData;
    
public:
    URadiusItemDynamicData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryGetItemActor(ARadiusItemBase*& ItemActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetFloatProperty(const FString& PropertyName, float PropertyValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDurability(const float NewDurability);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAdditionalTag(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAdditionalData(const FString& Key);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ParentContainerUid() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Durability(const float PreviousDurability) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChamberAmmos(FStackedItemsVerified& PreviousItems);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AdditionalTags(FAdditionalTagsVerified& PreviousTags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTopItemTagInStack(int32& ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetItemTagFromStack(const int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemBasicStaticData(FRadiusItemStaticData& OutData);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatProperty(const FString& PropertyName) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAdditionalTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAdditionalData(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsAdditionalTag(const FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsAdditionalData(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddAdditionalTag(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    bool AddAdditionalData(const FString& Key, const FString& Value);
    

    // Fix for true pure virtual functions not being implemented
};

