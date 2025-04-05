#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "AmmoStaticData.h"
#include "NPCLib.generated.h"

class AAIController;
class AActor;
class ACharacter;
class UBlackboardComponent;
class UWorld;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UNPCLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNPCLib();

    UFUNCTION(BlueprintCallable)
    static void UpdateAmmoStaticData(UPARAM(Ref) FAmmoStaticData& Data, const float WithFleshDamage, const float WithArmorDamage, const float WithInitialVelocity);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsRange(UBlackboardComponent* BlackboardComp, const FBlackboardKeySelector& Key, FFloatRange Value);
    
    UFUNCTION(BlueprintCallable)
    static void ReportTeamEvent(AActor* InBroadcaster, AActor* InEnemy, const FVector& InLastKnowLocation, float EventRange, float PassedInfoAge, float InStrength, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static void ReinitNPC(const UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void RadiusReportNoiseEvent(const FVector& NoiseLocation, const float Loudness, AActor* Instigator, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static FFloatRange GetBlackboardValueAsRange(UBlackboardComponent* BlackboardComp, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetAimLocation(const AAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorFeetLocation(ACharacter* Character);
    
};

