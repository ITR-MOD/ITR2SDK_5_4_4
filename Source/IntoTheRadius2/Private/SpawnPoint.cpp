#include "SpawnPoint.h"
#include "Components/BillboardComponent.h"

ASpawnPoint::ASpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Root"));
    this->bShouldWaitTideToGenerate = true;
    this->bIsIndependentFromRelevancy = false;
    this->GroupID = 0;
    this->SpawnerType = ERadiusSpawnerType::Monster;
    this->NeedDestroyOnClient = true;
    this->HideOnStart = true;
}


