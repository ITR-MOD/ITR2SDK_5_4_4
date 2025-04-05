#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LootGenerateInterface.h"
#include "SpawnPoint.h"
#include "ArtefactNestSpawnPoint.generated.h"

class AArtefactNestBase;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API AArtefactNestSpawnPoint : public ASpawnPoint, public ILootGenerateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ArtefactNestTypes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AArtefactNestBase* SpawnedNest;
    
public:
    AArtefactNestSpawnPoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnArtefactTaken();
    

    // Fix for true pure virtual functions not being implemented
};

