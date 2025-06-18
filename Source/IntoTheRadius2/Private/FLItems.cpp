#include "FLItems.h"
#include "Templates/SubclassOf.h"

UFLItems::UFLItems() {
}

void UFLItems::SwitchActorVisibilityOnOwner(AActor* Actor, const bool bNewHidden, const bool bIncludeChildren) {
}

void UFLItems::PackItemsToBox(UPrimitiveComponent* CollisionComp, TArray<AActor*> ActorsToPack, bool bExcludeNonFit, bool bProjectOnGround, TArray<AActor*>& Excluded) {
}

void UFLItems::IsShopItemData(const URadiusItemDynamicData* ItemData, EBlueprintResultYesNo& Result) {
}

void UFLItems::IsShopItemActor(const AActor* Item, EBlueprintResultYesNo& Result) {
}

bool UFLItems::IsItemAttachedToItem(UObject* WorldContext, UObject* Container) {
    return false;
}

bool UFLItems::IsInPlayerInventory(UObject* WorldContext, const FString& ContainerID) {
    return false;
}

URadiusHolsterComponent* UFLItems::GetTopParentItemActorHolster(AActor* Actor, TSubclassOf<AActor> TopParentClass) {
    return NULL;
}

AActor* UFLItems::GetTopParentItemActor(AActor* Actor) {
    return NULL;
}

UGripMotionControllerComponent* UFLItems::GetPrimaryControllerForActor(AActor* Actor) {
    return NULL;
}

AActor* UFLItems::GetParentItemActor(AActor* Actor) {
    return NULL;
}

AActor* UFLItems::GetModuleTopParent(AActor* Actor) {
    return NULL;
}

float UFLItems::GetMaxDurabilityFromWeaponData(const UObject* WorldContextObject, const FWeaponStaticData& WeaponStaticData) {
    return 0.0f;
}

float UFLItems::GetMaxDurability(const UObject* WorldContextObject, const FRadiusItemStaticData& ItemStaticData) {
    return 0.0f;
}

ALostAndFound* UFLItems::GetLostAndFound(UObject* WorldContextObject) {
    return NULL;
}

float UFLItems::GetItemMaxDurability(const AActor* Item) {
    return 0.0f;
}

float UFLItems::GetItemDurabilityRatio(const AActor* Item) {
    return 0.0f;
}

TArray<FString> UFLItems::GetAllPlayerContainerIDs(UObject* WorldContext) {
    return TArray<FString>();
}

UObject* UFLItems::FindParentContainerByOverlap(UPrimitiveComponent* PrimitiveToCheck) {
    return NULL;
}

URadiusItemDynamicData* UFLItems::FindAttachedMagazine(const URadiusItemDynamicData* WeaponDynamicData) {
    return NULL;
}

URadiusItemDynamicData* UFLItems::FindAttachedArmorPlate(const UObject* WorldContextObject, const FString& ArmorInstanceID) {
    return NULL;
}

URadiusItemDynamicData* UFLItems::CreateNewDynamicDataFromActor(AActor* ItemActor) {
    return NULL;
}

URadiusItemDynamicData* UFLItems::CreateNewDynamicData(const UObject* WorldContext, FGameplayTag ItemType, FItemConfiguration ItemConfiguration, const FString& ParentContainer, FTransform Transform) {
    return NULL;
}

bool UFLItems::CheckHasTrashMark(const AActor* Item) {
    return false;
}

bool UFLItems::CheckHasShopMark(const AActor* Item) {
    return false;
}

void UFLItems::CalculateSmoothingAlpha(bool& bOutIsAligned, float& OutAlignAlpha, USceneComponent* VRCameraRef, UMeshComponent* Mesh, const FName SocketName, const float DistanceLimit, const float AlphaThreshold) {
}

float UFLItems::CalculateContainerItemsWeight(UObject* WorldContext, const FString& ContainerID) {
    return 0.0f;
}

void UFLItems::CalculateChildItemsWeightAndCapacity(AActor* ItemActor, float& TotalWeight, float& Capacity) {
}

TArray<USceneComponent*> UFLItems::AddStartingGearToDynamicData(APawn* PlayerPawn, const FGearConfig GearConfig, const bool bIsLeftHanded) {
    return TArray<USceneComponent*>();
}


