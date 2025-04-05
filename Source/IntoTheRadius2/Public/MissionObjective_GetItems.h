#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusMissionObjectiveBase.h"
#include "MissionObjective_GetItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UMissionObjective_GetItems : public URadiusMissionObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FString> ItemInstanceIDs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ObjectiveItemsTypesToDeliver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FString> ObjectiveItemsInstanceIDsToDeliver;
    
public:
    UMissionObjective_GetItems();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnInventoryChanged(const FString& PlayerContainerUID);
    
    UFUNCTION(BlueprintCallable)
    void GetRequiredObjectiveItems(TArray<FGameplayTag>& TaggedItems, TArray<FString>& UidItems);
    
};

