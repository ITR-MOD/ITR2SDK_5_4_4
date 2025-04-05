#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnObjectiveCompletedDelegate.h"
#include "RadiusMissionObjectiveBase.generated.h"

class UAvailableMission;
class URadiusMissionObjectiveConfigBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusMissionObjectiveBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveCompleted OnObjectiveCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OwningMission, meta=(AllowPrivateAccess=true))
    UAvailableMission* OwningMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URadiusMissionObjectiveConfigBase* ObjectiveConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBegun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectiveUid;
    
public:
    URadiusMissionObjectiveBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UndoObjective();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningMission();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetObjectiveDescriptions(FText& ShortDescription, FText& LongDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusMissionObjectiveConfigBase* GetObjectiveConfig();
    
    UFUNCTION(BlueprintCallable)
    void FinishObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFinishObjective();
    
    UFUNCTION(BlueprintCallable)
    bool BeginObjective();
    
};

