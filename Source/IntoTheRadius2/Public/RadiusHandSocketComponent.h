#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "VRBPDatatypes.h"
#include "Grippables/HandSocketComponent.h"
#include "RadiusHandSocketComponent.generated.h"

class UGripMotionControllerComponent;
class USystemConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusHandSocketComponent : public UHandSocketComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SocketPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActorLocationForSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalSlotTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDenyDistanceGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVRHand AllowedHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttachParentID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USystemConfig* SystConfig;
    
public:
    URadiusHandSocketComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShowVisualizationMesh(bool bShowMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSecondary(bool bNewIsSecondary);
    
    UFUNCTION(BlueprintCallable)
    void SetDenyDistanceGrip(bool bNewDenyDistanceGrip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotForHand(EVRHand Hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetSocketGripTags() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHandSocketWorldLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHandSocketTransformBP(UGripMotionControllerComponent* QueryController, const bool bIgnoreOnlySnapMesh);
    
};

