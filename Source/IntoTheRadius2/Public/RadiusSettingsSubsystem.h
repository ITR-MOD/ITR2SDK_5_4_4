#pragma once
#include "CoreMinimal.h"
#include "EMovementDirectionType.h"
#include "EMovementType.h"
#include "EQualityType.h"
#include "ERadiusHeightMeasurementSystem.h"
#include "ERadiusLowerBodyMovementType.h"
#include "ETurningType.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusSettingsSubsystem.generated.h"

class UIniManager;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusSettingsSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIniManager* IniManager;
    
public:
    URadiusSettingsSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TabletOnLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetWalkInputDeadZone(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVolumeVoiceChat(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVolumeSounds(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVolumeMusic(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVolumeMaster(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVoiceChatMode(const bool Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVirtualStock(const bool Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetViewDistance(const EQualityType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTurnInputDeadZone(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTurningType(const ETurningType Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetTextures(const EQualityType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTabletOnLeft(const bool bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSubtitlesOn(const bool bIsOn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure = false)
    void SetSpectatorStability(const float Stability) const;

    UFUNCTION(BlueprintCallable, BlueprintPure = false)
    void SetSpectatorFOV(const float FOV) const;

    UFUNCTION(BlueprintCallable, BlueprintPure = false)
    void SetSpectatorEnabled(const bool bIsOn) const;

    UFUNCTION(BlueprintCallable, BlueprintPure = false)
    void SetSpectatorBrightness(const float Brightness) const;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSpeakersName(const FString& NewSpeakersName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSnapTurningAngle(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSmoothTurningSpeed(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSittingMode(bool bValue) const;
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQuality(const EQualityType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetResolution(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOverallQuality(const EQualityType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMovementType(const EMovementType Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMovementDirectionType(const EMovementDirectionType Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMicrophoneName(const FString& NewMicrophoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetLowerBodyMovementType(ERadiusLowerBodyMovementType LowerBodyMovementType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetLocale(const FString& NewLocale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetLeftHanded(const bool bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetJumpInputThreshold(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetIsVignetteOnTurnEnabled(const bool bIsEnabled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetIsVignetteOnRunEnabled(const bool bIsEnabled) const;
    
    UFUNCTION(BlueprintCallable)
    void SetIndexOfColorTable(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetIndexGripThreshold(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetHolsterOffset(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetHighlightDroppedItems(const bool Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure = false)
    void SetHideHelmet(const bool Value) const;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetHeightMeasurementSystem(ERadiusHeightMeasurementSystem HeightMeasurementSystem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetGrippingMode(const bool bIsTap) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetGripHapticState(const bool bIsOn) const;
    
    UFUNCTION(BlueprintCallable)
    void SetGeometry(const EQualityType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFoveation(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFoliageDensity(const EQualityType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetExperimentalOptimizations(const bool Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetEffects(const EQualityType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCrouchInputThreshold(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCheatValue(const FString& CheatName, const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCheatString(const FString& CheatName, const FString& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCheatEnabled(const FString& CheatName, const bool bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCharacterBodyHeight(float CharacterBodyHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCalibratedHeight(const float NewHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetBraceletOnLeft(const bool bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetBackpackOnLeft(const bool bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAmbientVolume(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAimSmoothingIntensity(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ResetVolume() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameStartSetup();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVirtualStockOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVignetteOnTurnEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVignetteOnRunEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubtitlesOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSittingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftHanded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHighlightDroppedItemsOn() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHideHelmet() const;

    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrippingTap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheatEnabled(const FString& CheatName, const bool bDefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyFollowHeadRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWalkInputDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolumeVoiceChat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolumeSounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolumeMusic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolumeMaster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQualityType GetViewDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnInputDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETurningType GetTurningType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQualityType GetTextures() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpectatorStability() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpectatorFOV() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpectatorEnabled() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpectatorBrightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSpeakersName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSnapTurningAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSmoothTurningSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQualityType GetShadowQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetScreenPercentageList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResolution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetPixelDensityList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQualityType GetOverallQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovementType GetMovementType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovementDirectionType GetMovementDirectionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMicrophoneName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERadiusLowerBodyMovementType GetLowerBodyMovementType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLocale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpInputThreshold() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetIndexOfColorTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIndexGripThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHolsterOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERadiusHeightMeasurementSystem GetHeightMeasurementSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGripHapticState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQualityType GetGeometry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoveation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQualityType GetFoliageDensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetExperimentalOptimizations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQualityType GetEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrouchInputThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCheatValue(const FString& CheatName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCheatString(const FString& CheatName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCharacterBodyHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCalibratedHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmbientVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimSmoothingIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BraceletOnLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BackpackOnLeft() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyVolumeSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAllGraphicsSettings();
    
};

