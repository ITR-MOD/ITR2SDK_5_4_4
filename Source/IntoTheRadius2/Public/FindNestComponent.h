#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FindNestComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UFindNestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFindNestComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnArtefactNestSpawned(AActor* SpawnedNest);
    
    UFUNCTION(BlueprintCallable)
    void OnArtefactNestDestroyed(AActor* SpawnedNest);
    
    UFUNCTION(BlueprintCallable)
    void FindClosestNest(int32 NestReactLevel, float DetectingRange, bool& IsFound, AActor*& OutClosestNest);
    
};

