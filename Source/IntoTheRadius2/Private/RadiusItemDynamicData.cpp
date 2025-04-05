#include "RadiusItemDynamicData.h"
#include "Net/UnrealNetwork.h"

URadiusItemDynamicData::URadiusItemDynamicData() {
    this->Durability = 100.00f;
}

bool URadiusItemDynamicData::TryGetItemActor(ARadiusItemBase*& ItemActor) {
    return false;
}

void URadiusItemDynamicData::SetFloatProperty(const FString& PropertyName, float PropertyValue) {
}

void URadiusItemDynamicData::SetDurability(const float NewDurability) {
}

bool URadiusItemDynamicData::RemoveAdditionalTag(const FGameplayTag Tag) {
    return false;
}

bool URadiusItemDynamicData::RemoveAdditionalData(const FString& Key) {
    return false;
}

void URadiusItemDynamicData::OnRep_ParentContainerUid() const {
}

void URadiusItemDynamicData::OnRep_Durability(const float PreviousDurability) const {
}

void URadiusItemDynamicData::OnRep_ChamberAmmos(FStackedItemsVerified& PreviousItems) {
}

void URadiusItemDynamicData::OnRep_AdditionalTags(FAdditionalTagsVerified& PreviousTags) {
}

FGameplayTag URadiusItemDynamicData::GetTopItemTagInStack(int32& ItemIndex) const {
    return FGameplayTag{};
}

FGameplayTag URadiusItemDynamicData::GetItemTagFromStack(const int32 ItemIndex) const {
    return FGameplayTag{};
}

bool URadiusItemDynamicData::GetItemBasicStaticData(FRadiusItemStaticData& OutData) {
    return false;
}

float URadiusItemDynamicData::GetFloatProperty(const FString& PropertyName) const {
    return 0.0f;
}

TArray<FGameplayTag> URadiusItemDynamicData::GetAdditionalTags() const {
    return TArray<FGameplayTag>();
}

FString URadiusItemDynamicData::GetAdditionalData(const FString& Key) const {
    return TEXT("");
}

bool URadiusItemDynamicData::ContainsAdditionalTag(const FGameplayTag Tag) const {
    return false;
}

bool URadiusItemDynamicData::ContainsAdditionalData(const FString& Key) const {
    return false;
}

bool URadiusItemDynamicData::CheckItem() const {
    return false;
}

bool URadiusItemDynamicData::AddAdditionalTag(const FGameplayTag Tag) {
    return false;
}

bool URadiusItemDynamicData::AddAdditionalData(const FString& Key, const FString& Value) {
    return false;
}

void URadiusItemDynamicData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusItemDynamicData, InstanceUid);
    DOREPLIFETIME(URadiusItemDynamicData, ActorReference);
    DOREPLIFETIME(URadiusItemDynamicData, Attachments);
    DOREPLIFETIME(URadiusItemDynamicData, DynamicLocation);
    DOREPLIFETIME(URadiusItemDynamicData, DynamicRotation);
    DOREPLIFETIME(URadiusItemDynamicData, ParentContainerUid);
    DOREPLIFETIME(URadiusItemDynamicData, Durability);
    DOREPLIFETIME(URadiusItemDynamicData, ItemType);
    DOREPLIFETIME(URadiusItemDynamicData, StackedItems);
    DOREPLIFETIME(URadiusItemDynamicData, AdditionalTags);
    DOREPLIFETIME(URadiusItemDynamicData, AdditionalData);
}


