#include "LootSpawnArea.h"
#include "Components/BoxComponent.h"

ALootSpawnArea::ALootSpawnArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExcludeNonFit = false;
    this->bProjectOnGround = true;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->BoxComponent->SetupAttachment(RootComponent);
}

void ALootSpawnArea::ArrangeItems() {
}

void ALootSpawnArea::ArrangeCustomItems(TArray<AActor*> Items) {
}


