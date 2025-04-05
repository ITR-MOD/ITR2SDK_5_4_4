#include "MonsterSpawnPoint.h"

AMonsterSpawnPoint::AMonsterSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaRadius = 0.00f;
}

void AMonsterSpawnPoint::SpawnNext(const bool bSkipFirst) {
}


FTransform AMonsterSpawnPoint::GetSpawnTransform_Implementation(AActor* Path) {
    return FTransform{};
}


