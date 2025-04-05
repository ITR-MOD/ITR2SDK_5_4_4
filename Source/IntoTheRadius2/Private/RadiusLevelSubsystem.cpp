#include "RadiusLevelSubsystem.h"

URadiusLevelSubsystem::URadiusLevelSubsystem() {
}

FGameplayTag URadiusLevelSubsystem::ValidateLevelTag(const FGameplayTag& LevelTag) const {
    return FGameplayTag{};
}

void URadiusLevelSubsystem::OnLevelLoaded_DoAutosave() {
}

void URadiusLevelSubsystem::LoadLevel(const FGameplayTag LevelTag, const bool bHardTravel, const bool bDisconnect, const bool bTransitionBetweenLevels) {
}

bool URadiusLevelSubsystem::IsMainMenuLevel() const {
    return false;
}

bool URadiusLevelSubsystem::IsLevelAvailable(const FGameplayTag LevelTag) const {
    return false;
}

bool URadiusLevelSubsystem::IsGateLinkAvailable(const FGameplayTag GateFromTag, const FGameplayTag GateToTag) const {
    return false;
}

bool URadiusLevelSubsystem::IsGateAvailable(const FGameplayTag GateTag) const {
    return false;
}

FText URadiusLevelSubsystem::GetLevelName(const FGameplayTag LevelTag) const {
    return FText::GetEmpty();
}

TArray<FGameplayTag> URadiusLevelSubsystem::GetGateLinks(const FGameplayTag FromGateTag) const {
    return TArray<FGameplayTag>();
}

FText URadiusLevelSubsystem::GetCurrentLevelName() const {
    return FText::GetEmpty();
}

FGameplayTag URadiusLevelSubsystem::GetCurrentLevel() const {
    return FGameplayTag{};
}

void URadiusLevelSubsystem::DoLoadLevel() {
}


