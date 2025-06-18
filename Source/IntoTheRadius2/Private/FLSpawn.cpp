#include "FLSpawn.h"
#include "Templates/SubclassOf.h"

UFLSpawn::UFLSpawn() {
}

AActor* UFLSpawn::SpawnPooledActor(const UObject* WorldContextObject, const TSoftClassPtr<AActor> ActorClass, const FTransform Transform, const FItemConfiguration ItemConfiguration, const bool bCreateDynamicData) {
    return NULL;
}

AActor* UFLSpawn::SpawnMonster(const UObject* WorldContextObject, const FGameplayTag TypeTag, const FTransform& Transform, AActor* Owner) {
    return NULL;
}

AActor* UFLSpawn::SpawnItemFromInventory(UObject* WorldContextObject, const FString& ItemId) {
    return NULL;
}

AActor* UFLSpawn::SpawnItemByTypeTag(const UObject* WorldContextObject, const FGameplayTag TypeTag, const FTransform& Transform, const FItemConfiguration& ItemConfiguration, const bool bCreateDynamicData) {
    return NULL;
}

AActor* UFLSpawn::SpawnDeferredActor(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass, const FTransform Transform) {
    return NULL;
}

AActor* UFLSpawn::SpawnAnomaly(const UObject* WorldContextObject, const FGameplayTag TypeTag, const FTransform& Transform) {
    return NULL;
}

FTransform UFLSpawn::ProjectTransformOnGround(const UObject* WorldContextObject, const FTransform& Transform, bool& bSuccess) {
    return FTransform{};
}

FVector UFLSpawn::ProjectPointOnGround(const UObject* WorldContextObject, const FVector& Location, bool& bSuccess) {
    return FVector{};
}

void UFLSpawn::FinishSpawning(AActor* Actor, const FTransform& Transform) {
}

UActorComponent* UFLSpawn::BP_DuplicateComponent(UActorComponent* OriginalComponent, AActor* NewOwner, bool bManualAttachment, const FTransform& RelativeTransform) {
    return NULL;
}


