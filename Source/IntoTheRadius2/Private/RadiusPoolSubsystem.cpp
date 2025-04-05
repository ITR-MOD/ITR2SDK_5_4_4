#include "RadiusPoolSubsystem.h"
#include "Templates/SubclassOf.h"

URadiusPoolSubsystem::URadiusPoolSubsystem() {
}

void URadiusPoolSubsystem::Server_ReturnActor_Implementation(AActor* Actor) {
}

bool URadiusPoolSubsystem::ReturnActor(AActor* Actor) {
    return false;
}

void URadiusPoolSubsystem::PrintPools() {
}

bool URadiusPoolSubsystem::IsActorInPool(AActor* Actor) {
    return false;
}

AActor* URadiusPoolSubsystem::GetPooledActor(const TSubclassOf<AActor> ActorClass, const FTransform Transform, AActor* Owner, APawn* Instigator, FItemConfiguration ItemConfiguration) {
    return NULL;
}


