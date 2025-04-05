#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusCollisionActorPair.h"
#include "RadiusCollisionIgnorePairArray.h"
#include "RadiusCollisionPrimPair.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusIgnoreCollisionSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusIgnoreCollisionSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusCollisionActorPair> RadiusActorsIgnoringCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRadiusCollisionPrimPair, FRadiusCollisionIgnorePairArray> RadiusCollisionTrackedPairs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> ActorsQueue;
    
public:
    URadiusIgnoreCollisionSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateIgnoreCollisionForItemActorAttachments(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLoadLevel(FGameplayTag LevelTag);
    
};

