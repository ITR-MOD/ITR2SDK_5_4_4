#include "RadiusContainerSubsystem.h"

URadiusContainerSubsystem::URadiusContainerSubsystem() {
}

void URadiusContainerSubsystem::UnregisterHolster(const FString& ContainerUid) {
}

bool URadiusContainerSubsystem::TryAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem) {
    return false;
}

void URadiusContainerSubsystem::SetContainerTransform(const FString& ContainerID, const FTransform& Transform) {
}

void URadiusContainerSubsystem::RequestUnbindOnContainerParentChanged(const FString& ContainerID, const FOnContainerParentChanged_ContainerDelegate& Event) {
}

void URadiusContainerSubsystem::RequestUnbindOnContainerChildrenChanged(const FString& ContainerID, const FOnContainerChildrenChanged_ContainerDelegate& Event) {
}

void URadiusContainerSubsystem::RequestBindOnContainerParentChanged(const FString& ContainerID, const FOnContainerParentChanged_ContainerDelegate& Event) {
}

void URadiusContainerSubsystem::RequestBindOnContainerChildrenChanged(const FString& ContainerID, const FOnContainerChildrenChanged_ContainerDelegate& Event) {
}

void URadiusContainerSubsystem::RemoveItemFromTrack(const EVRHand Hand) {
}

void URadiusContainerSubsystem::RemoveAttachedItemFromTrack(const EVRHand Hand) {
}

void URadiusContainerSubsystem::RegisterHolster(const FString& ContainerUid, UObject* ContainerObject) {
}

bool URadiusContainerSubsystem::PutItemToContainer(UObject* Container, AActor* ItemActor, const bool Silent) {
    return false;
}

void URadiusContainerSubsystem::PrintContainersStructure() {
}

void URadiusContainerSubsystem::PlaceInsideContainer(UObject* Item, const FString& ParentContainerUid, const FTransform& Transform) {
}

bool URadiusContainerSubsystem::IsPlayerContainerID(const FString& ContainerID) const {
    return false;
}

bool URadiusContainerSubsystem::IsConcretePlayerContainerID(const APlayerState* PlayerState, const FString& ContainerID) const {
    return false;
}

void URadiusContainerSubsystem::InstantHolsterActor(UObject* Container, AActor* ItemActor, const bool Silent) {
}

FTransform URadiusContainerSubsystem::GetWorldTransform(const FString& ContainerUid, const FTransform& InitialTransform) {
    return FTransform{};
}

FString URadiusContainerSubsystem::GetTopParentContainerID(const FString& ContainerID) const {
    return TEXT("");
}

FString URadiusContainerSubsystem::GetParentContainerID(const FString& ContainerID) const {
    return TEXT("");
}

UItemContainerData* URadiusContainerSubsystem::GetOrCreateItemContainer(const FString& ContainerID, UObject* ContainerObject, const FString& ParentID, FTransform RelativeTransform, bool bUpdateContainerObject) {
    return NULL;
}

UObject* URadiusContainerSubsystem::GetMostRelevantContainer(const EVRHand Hand) {
    return NULL;
}

void URadiusContainerSubsystem::GetItemContainerBP(const FString& ContainerID, bool& bFound, UItemContainerData*& ContainerData) {
}

FString URadiusContainerSubsystem::GetCurrentLevelContainerID() {
    return TEXT("");
}

TMap<FString, UItemContainerData*> URadiusContainerSubsystem::GetContainers() {
    return TMap<FString, UItemContainerData*>();
}

UObject* URadiusContainerSubsystem::GetContainerObject(const FString& ContainerID) {
    return NULL;
}

bool URadiusContainerSubsystem::GetAllPlayerItems(AActor* Player, TArray<ARadiusItemBase*>& Items) const {
    return false;
}

TArray<FString> URadiusContainerSubsystem::GetAllChildContainerIDs(const FString& ParentContainerID, const bool bIncludeChildren) const {
    return TArray<FString>();
}

bool URadiusContainerSubsystem::DropHolsteredActor(UObject* Container, AActor* Item) {
    return false;
}

TArray<AActor*> URadiusContainerSubsystem::DropHolstered(UObject* Container) {
    return TArray<AActor*>();
}

bool URadiusContainerSubsystem::CanAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem) const {
    return false;
}

void URadiusContainerSubsystem::AddItemToTrack(const EVRHand Hand, AActor* Item) {
}

void URadiusContainerSubsystem::AddContainerToContainer(const FString& ContainerID, const FString& ParentID, FTransform RelativeTransform, bool Silent) {
}

void URadiusContainerSubsystem::AddAttachedItemToTrack(const EVRHand Hand, AActor* AttachedItem) {
}


