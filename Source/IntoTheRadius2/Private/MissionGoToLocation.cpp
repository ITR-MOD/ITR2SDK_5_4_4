#include "MissionGoToLocation.h"
#include "Components/SphereComponent.h"

AMissionGoToLocation::AMissionGoToLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocationCollision = CreateDefaultSubobject<USphereComponent>(TEXT("LocationCollision"));
    this->GoToObjective = NULL;
}

void AMissionGoToLocation::HandleLocationReached(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


