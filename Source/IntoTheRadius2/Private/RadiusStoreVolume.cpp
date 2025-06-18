#include "RadiusStoreVolume.h"
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"

ARadiusStoreVolume::ARadiusStoreVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->RootComponent = BoxComponent;
}

void ARadiusStoreVolume::OnFinishLoadLevel() {
}

void ARadiusStoreVolume::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ARadiusStoreVolume::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ARadiusStoreVolume::HasAnyPlayersInside() const {
    return false;
}

void ARadiusStoreVolume::CheckPlayersInVolume() {
}


