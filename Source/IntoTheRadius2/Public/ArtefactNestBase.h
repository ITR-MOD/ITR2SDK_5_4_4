#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ArtefactNestInterface.h"
#include "OnArtefactTakenDelegate.h"
#include "ArtefactNestBase.generated.h"

class ARadiusItemBase;
class USceneComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API AArtefactNestBase : public AActor, public IArtefactNestInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArtefactUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArtefactTag;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArtefactTaken OnArtefactTaken;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ArtefactSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArtefactRef, meta=(AllowPrivateAccess=true))
    ARadiusItemBase* ArtefactRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FString NestUniqueId;
    
public:
    AArtefactNestBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ArtefactRef();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArtefactRefReplicated();
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadFromGameData();
    

    // Fix for true pure virtual functions not being implemented
};

