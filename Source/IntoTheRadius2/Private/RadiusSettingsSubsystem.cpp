#include "RadiusSettingsSubsystem.h"

URadiusSettingsSubsystem::URadiusSettingsSubsystem() {
    this->IniManager = NULL;
}

bool URadiusSettingsSubsystem::TabletOnLeft() const {
    return false;
}

void URadiusSettingsSubsystem::SetWalkInputDeadZone(const float Value) const {
}

void URadiusSettingsSubsystem::SetVolumeVoiceChat(const float Value) const {
}

void URadiusSettingsSubsystem::SetVolumeSounds(const float Value) const {
}

void URadiusSettingsSubsystem::SetVolumeMusic(const float Value) const {
}

void URadiusSettingsSubsystem::SetVolumeMaster(const float Value) const {
}

void URadiusSettingsSubsystem::SetVoiceChatMode(const bool Value) const {
}

void URadiusSettingsSubsystem::SetVirtualStock(const bool Value) const {
}

void URadiusSettingsSubsystem::SetViewDistance(const EQualityType Value) {
}

void URadiusSettingsSubsystem::SetTurnInputDeadZone(const float Value) const {
}

void URadiusSettingsSubsystem::SetTurningType(const ETurningType Value) const {
}

void URadiusSettingsSubsystem::SetTextures(const EQualityType Value) {
}

void URadiusSettingsSubsystem::SetTabletOnLeft(const bool bValue) const {
}

void URadiusSettingsSubsystem::SetSubtitlesOn(const bool bIsOn) const {
}

void URadiusSettingsSubsystem::SetSpectatorStability(const float Stability) const {
}

void URadiusSettingsSubsystem::SetSpectatorFOV(const float FOV) const {
}

void URadiusSettingsSubsystem::SetSpectatorEnabled(const bool bIsOn) const {
}

void URadiusSettingsSubsystem::SetSpectatorBrightness(const float Brightness) const {
}

void URadiusSettingsSubsystem::SetSpeakersName(const FString& NewSpeakersName) const {
}

void URadiusSettingsSubsystem::SetSnapTurningAngle(const float Value) const {
}

void URadiusSettingsSubsystem::SetSmoothTurningSpeed(const float Value) const {
}

void URadiusSettingsSubsystem::SetSittingMode(bool bValue) const {
}

void URadiusSettingsSubsystem::SetShadowQuality(const EQualityType Value) {
}

void URadiusSettingsSubsystem::SetResolution(const int32 Value) {
}

void URadiusSettingsSubsystem::SetOverallQuality(const EQualityType Value) {
}

void URadiusSettingsSubsystem::SetMovementType(const EMovementType Value) const {
}

void URadiusSettingsSubsystem::SetMovementDirectionType(const EMovementDirectionType Value) const {
}

void URadiusSettingsSubsystem::SetMicrophoneName(const FString& NewMicrophoneName) const {
}

void URadiusSettingsSubsystem::SetLowerBodyMovementType(ERadiusLowerBodyMovementType LowerBodyMovementType) const {
}

void URadiusSettingsSubsystem::SetLocale(const FString& NewLocale) const {
}

void URadiusSettingsSubsystem::SetLeftHanded(const bool bValue) const {
}

void URadiusSettingsSubsystem::SetJumpInputThreshold(const float Value) const {
}

void URadiusSettingsSubsystem::SetIsVignetteOnTurnEnabled(const bool bIsEnabled) const {
}

void URadiusSettingsSubsystem::SetIsVignetteOnRunEnabled(const bool bIsEnabled) const {
}

void URadiusSettingsSubsystem::SetIndexOfColorTable(const int32 Index) {
}

void URadiusSettingsSubsystem::SetIndexGripThreshold(const float Value) const {
}

void URadiusSettingsSubsystem::SetHolsterOffset(const float Value) const {
}

void URadiusSettingsSubsystem::SetHighlightDroppedItems(const bool Value) const {
}

void URadiusSettingsSubsystem::SetHideHelmet(const bool Value) const {
}

void URadiusSettingsSubsystem::SetHeightMeasurementSystem(ERadiusHeightMeasurementSystem HeightMeasurementSystem) const {
}

void URadiusSettingsSubsystem::SetGrippingMode(const bool bIsTap) const {
}

void URadiusSettingsSubsystem::SetGripHapticState(const bool bIsOn) const {
}

void URadiusSettingsSubsystem::SetGeometry(const EQualityType Value) {
}

void URadiusSettingsSubsystem::SetFoveation(const int32 Value) {
}

void URadiusSettingsSubsystem::SetFoliageDensity(const EQualityType Value) {
}

void URadiusSettingsSubsystem::SetExperimentalOptimizations(const bool Value) const {
}

void URadiusSettingsSubsystem::SetEffects(const EQualityType Value) {
}

void URadiusSettingsSubsystem::SetCrouchInputThreshold(const float Value) const {
}

void URadiusSettingsSubsystem::SetCheatValue(const FString& CheatName, const float Value) const {
}

void URadiusSettingsSubsystem::SetCheatString(const FString& CheatName, const FString& Value) const {
}

void URadiusSettingsSubsystem::SetCheatEnabled(const FString& CheatName, const bool bValue) const {
}

void URadiusSettingsSubsystem::SetCharacterBodyHeight(float CharacterBodyHeight) const {
}

void URadiusSettingsSubsystem::SetCalibratedHeight(const float NewHeight) const {
}

void URadiusSettingsSubsystem::SetBraceletOnLeft(const bool bValue) const {
}

void URadiusSettingsSubsystem::SetBackpackOnLeft(const bool bValue) const {
}

void URadiusSettingsSubsystem::SetAmbientVolume(const float Value) const {
}

void URadiusSettingsSubsystem::SetAimSmoothingIntensity(const float Value) const {
}

void URadiusSettingsSubsystem::ResetVolume() const {
}

void URadiusSettingsSubsystem::OnGameStartSetup() {
}

bool URadiusSettingsSubsystem::IsVoiceChatEnabled() const {
    return false;
}

bool URadiusSettingsSubsystem::IsVirtualStockOn() const {
    return false;
}

bool URadiusSettingsSubsystem::IsVignetteOnTurnEnabled() const {
    return false;
}

bool URadiusSettingsSubsystem::IsVignetteOnRunEnabled() const {
    return false;
}

bool URadiusSettingsSubsystem::IsSubtitlesOn() const {
    return false;
}

bool URadiusSettingsSubsystem::IsSittingMode() const {
    return false;
}

bool URadiusSettingsSubsystem::IsLeftHanded() const {
    return false;
}

bool URadiusSettingsSubsystem::IsHighlightDroppedItemsOn() const {
    return false;
}

bool URadiusSettingsSubsystem::IsHideHelmet() const {
    return false;
}

bool URadiusSettingsSubsystem::IsGrippingTap() const {
    return false;
}

bool URadiusSettingsSubsystem::IsCheatEnabled(const FString& CheatName, const bool bDefaultValue) const {
    return false;
}

bool URadiusSettingsSubsystem::IsBodyFollowHeadRotation() const {
    return false;
}

float URadiusSettingsSubsystem::GetWalkInputDeadZone() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetVolumeVoiceChat() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetVolumeSounds() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetVolumeMusic() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetVolumeMaster() const {
    return 0.0f;
}

EQualityType URadiusSettingsSubsystem::GetViewDistance() const {
    return EQualityType::Low;
}

float URadiusSettingsSubsystem::GetTurnInputDeadZone() const {
    return 0.0f;
}

ETurningType URadiusSettingsSubsystem::GetTurningType() const {
    return ETurningType::Smooth;
}

EQualityType URadiusSettingsSubsystem::GetTextures() const {
    return EQualityType::Low;
}

float URadiusSettingsSubsystem::GetSpectatorStability() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetSpectatorFOV() const {
    return 0.0f;
}

bool URadiusSettingsSubsystem::GetSpectatorEnabled() const {
    return false;
}

float URadiusSettingsSubsystem::GetSpectatorBrightness() const {
    return 0.0f;
}

FString URadiusSettingsSubsystem::GetSpeakersName() const {
    return TEXT("");
}

float URadiusSettingsSubsystem::GetSnapTurningAngle() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetSmoothTurningSpeed() const {
    return 0.0f;
}

EQualityType URadiusSettingsSubsystem::GetShadowQuality() const {
    return EQualityType::Low;
}

TArray<int32> URadiusSettingsSubsystem::GetScreenPercentageList() const {
    return TArray<int32>();
}

int32 URadiusSettingsSubsystem::GetResolution() const {
    return 0;
}

TArray<float> URadiusSettingsSubsystem::GetPixelDensityList() const {
    return TArray<float>();
}

EQualityType URadiusSettingsSubsystem::GetOverallQuality() const {
    return EQualityType::Low;
}

EMovementType URadiusSettingsSubsystem::GetMovementType() const {
    return EMovementType::Normal;
}

EMovementDirectionType URadiusSettingsSubsystem::GetMovementDirectionType() const {
    return EMovementDirectionType::Controller;
}

FString URadiusSettingsSubsystem::GetMicrophoneName() const {
    return TEXT("");
}

ERadiusLowerBodyMovementType URadiusSettingsSubsystem::GetLowerBodyMovementType() const {
    return ERadiusLowerBodyMovementType::BodyTransfromLock;
}

FString URadiusSettingsSubsystem::GetLocale() const {
    return TEXT("");
}

float URadiusSettingsSubsystem::GetJumpInputThreshold() const {
    return 0.0f;
}

int32 URadiusSettingsSubsystem::GetIndexOfColorTable() {
    return 0;
}

float URadiusSettingsSubsystem::GetIndexGripThreshold() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetHolsterOffset() const {
    return 0.0f;
}

ERadiusHeightMeasurementSystem URadiusSettingsSubsystem::GetHeightMeasurementSystem() const {
    return ERadiusHeightMeasurementSystem::Metric;
}

bool URadiusSettingsSubsystem::GetGripHapticState() const {
    return false;
}

EQualityType URadiusSettingsSubsystem::GetGeometry() const {
    return EQualityType::Low;
}

int32 URadiusSettingsSubsystem::GetFoveation() const {
    return 0;
}

EQualityType URadiusSettingsSubsystem::GetFoliageDensity() const {
    return EQualityType::Low;
}

bool URadiusSettingsSubsystem::GetExperimentalOptimizations() const {
    return false;
}

EQualityType URadiusSettingsSubsystem::GetEffects() const {
    return EQualityType::Low;
}

float URadiusSettingsSubsystem::GetCrouchInputThreshold() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetCheatValue(const FString& CheatName) const {
    return 0.0f;
}

FString URadiusSettingsSubsystem::GetCheatString(const FString& CheatName) const {
    return TEXT("");
}

float URadiusSettingsSubsystem::GetCharacterBodyHeight() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetCalibratedHeight() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetAmbientVolume() const {
    return 0.0f;
}

float URadiusSettingsSubsystem::GetAimSmoothingIntensity() const {
    return 0.0f;
}

bool URadiusSettingsSubsystem::BraceletOnLeft() const {
    return false;
}

bool URadiusSettingsSubsystem::BackpackOnLeft() const {
    return false;
}

void URadiusSettingsSubsystem::ApplyVolumeSettings() {
}

void URadiusSettingsSubsystem::ApplyAllGraphicsSettings() {
}


