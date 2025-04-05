#include "LootSpawnGroup.h"
#include "ERadiusSpawnerType.h"

ALootSpawnGroup::ALootSpawnGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnerType = ERadiusSpawnerType::Loot;
}


