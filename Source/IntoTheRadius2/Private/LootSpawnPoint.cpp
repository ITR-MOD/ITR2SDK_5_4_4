#include "LootSpawnPoint.h"
#include "ERadiusSpawnerType.h"

ALootSpawnPoint::ALootSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnerType = ERadiusSpawnerType::Loot;
    this->LootPoints = 3;
}

void ALootSpawnPoint::SpawnNext() {
}

void ALootSpawnPoint::OnItemGripped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation) {
}

void ALootSpawnPoint::EnablePhysicsAndSpawnNext(AActor* Item) {
}


