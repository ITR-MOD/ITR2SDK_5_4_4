#include "FindNestComponent.h"

UFindNestComponent::UFindNestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFindNestComponent::OnArtefactNestSpawned(AActor* SpawnedNest) {
}

void UFindNestComponent::OnArtefactNestDestroyed(AActor* SpawnedNest) {
}

void UFindNestComponent::FindClosestNest(int32 NestReactLevel, float DetectingRange, bool& IsFound, AActor*& OutClosestNest) {
}


