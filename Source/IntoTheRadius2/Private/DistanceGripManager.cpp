#include "DistanceGripManager.h"

UDistanceGripManager::UDistanceGripManager() {
    this->GripSystemOwner = NULL;
}

void UDistanceGripManager::LevelTransitionStartCallback() {
}

void UDistanceGripManager::LevelTransitionEndCallback() {
}

void UDistanceGripManager::ItemTakenFromLevelCallback(URadiusItemDynamicData* ItemTaken) {
}

void UDistanceGripManager::ItemStoredToLevelCallback(URadiusItemDynamicData* ItemStored) {
}

void UDistanceGripManager::ItemRemovedFromLevelCallback(URadiusItemDynamicData* ItemRemoved) {
}

void UDistanceGripManager::ItemActorRemovedCallback(URadiusItemDynamicData* ItemWithActorRemoved) {
}


