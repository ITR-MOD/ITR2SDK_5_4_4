#include "ArtefactNestSpawnPoint.h"
#include "ERadiusSpawnerType.h"

AArtefactNestSpawnPoint::AArtefactNestSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnerType = ERadiusSpawnerType::ArtefactNest;
    this->SpawnedNest = NULL;
}

void AArtefactNestSpawnPoint::OnArtefactTaken() {
}


