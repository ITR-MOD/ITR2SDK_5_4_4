#include "RadiusSpawnGroup.h"
#include "Components/BillboardComponent.h"

ARadiusSpawnGroup::ARadiusSpawnGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Root"));
    this->bShouldWaitTideToGenerate = true;
    this->GroupID = 0;
    this->SpawnerType = ERadiusSpawnerType::Monster;
}

void ARadiusSpawnGroup::CollectAttachedSpawners() {
}


