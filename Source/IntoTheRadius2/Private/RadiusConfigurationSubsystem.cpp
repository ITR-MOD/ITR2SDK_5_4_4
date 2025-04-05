#include "RadiusConfigurationSubsystem.h"
#include "Templates/SubclassOf.h"

URadiusConfigurationSubsystem::URadiusConfigurationSubsystem() {
    this->ItemsConfig = NULL;
    this->AllMissionsConfig = NULL;
    this->GameConfig = NULL;
    this->PlayerConfig = NULL;
    this->WeaponConfig = NULL;
    this->NPCConfig = NULL;
    this->SystemConfig = NULL;
    this->LootConfig = NULL;
    this->DifficultyConfig = NULL;
    this->ExplosionConfig = NULL;
    this->WikiConfig = NULL;
}

void URadiusConfigurationSubsystem::SwapResult(const FSwapAudioOutputResult& NewSwapResult) {
}

void URadiusConfigurationSubsystem::SwapOutputDevices(const TArray<FAudioOutputDeviceInfo>& AvailableDevices) {
}

void URadiusConfigurationSubsystem::SetupConfigValues() {
}

FStimuliData URadiusConfigurationSubsystem::GetStimulusDataByTag(const FGameplayTag ItemType) const {
    return FStimuliData{};
}

bool URadiusConfigurationSubsystem::GetRadiusItemClassByTag(const FGameplayTag ItemId, TSoftClassPtr<AActor>& ItemActor) const {
    return false;
}

bool URadiusConfigurationSubsystem::GetPureWeaponStaticDataByTag(const FGameplayTag& ItemType, FWeaponStaticData& OutData) const {
    return false;
}

FPoolActorConfig URadiusConfigurationSubsystem::GetPoolActorConfig(TSubclassOf<AActor> ActorClass) {
    return FPoolActorConfig{};
}

FRadiusNPCStaticData URadiusConfigurationSubsystem::GetNPCStaticDataByTag(const FGameplayTag ItemType) const {
    return FRadiusNPCStaticData{};
}

FRadiusNPCStaticData URadiusConfigurationSubsystem::GetNPCData(const APawn* NPCBody) const {
    return FRadiusNPCStaticData{};
}

FGameplayTag URadiusConfigurationSubsystem::GetItemTagBySoftClass(const TSoftClassPtr<AActor> ItemClass) const {
    return FGameplayTag{};
}

FGameplayTag URadiusConfigurationSubsystem::GetItemTagByClass(const AActor* ItemActor) const {
    return FGameplayTag{};
}

UDifficultyConfig* URadiusConfigurationSubsystem::GetDifficultyConfig() const {
    return NULL;
}

FText URadiusConfigurationSubsystem::GetDeathReasonTextByTag(const FGameplayTag DeathReason) const {
    return FText::GetEmpty();
}

bool URadiusConfigurationSubsystem::GetControllerTransformAdjustment(FGameplayTag ControllerType, FTransform& OutTransform) const {
    return false;
}

bool URadiusConfigurationSubsystem::GetBasicStaticDataByTag(const FGameplayTag& ItemType, FRadiusItemStaticData& OutData) const {
    return false;
}

bool URadiusConfigurationSubsystem::GetAttachmentStaticDataByTag(const FGameplayTag& ItemType, FAttachmentStaticData& OutData) const {
    return false;
}

FText URadiusConfigurationSubsystem::GetAnomalyNameByTag(const FGameplayTag AnomalyType) const {
    return FText::GetEmpty();
}

bool URadiusConfigurationSubsystem::GetAmmoStaticDataByTag(const FGameplayTag& ItemType, FAmmoStaticData& OutData) const {
    return false;
}

bool URadiusConfigurationSubsystem::GetAmmoContainerStaticDataByTag(const FGameplayTag& ItemType, FAmmoContainerStaticData& OutData) const {
    return false;
}

bool URadiusConfigurationSubsystem::FindImpactAssetData(const AActor* Actor, const UPhysicalMaterial* Material, const FName DefaultRow, FRadiusImpactAssetRow& ImpactAssetRow) {
    return false;
}

bool URadiusConfigurationSubsystem::FindAmmoStaticData(const FGameplayTag& AmmoCaliber, const FGameplayTag& AmmoType, FAmmoStaticData& OutData) const {
    return false;
}


