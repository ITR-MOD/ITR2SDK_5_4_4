#include "HTNExtension_Cooldown.h"

UHTNExtension_Cooldown::UHTNExtension_Cooldown() {
}

void UHTNExtension_Cooldown::ResetCooldownsByTag(const FGameplayTag& CooldownTag) {
}

void UHTNExtension_Cooldown::ResetAllCooldownsWithoutGameplayTag() {
}

void UHTNExtension_Cooldown::ResetAllCooldowns() {
}

float UHTNExtension_Cooldown::GetTagCooldownEndTime(const FGameplayTag& CooldownTag) const {
    return 0.0f;
}

float UHTNExtension_Cooldown::GetCooldownEndTime(const UObject* CooldownOwner) const {
    return 0.0f;
}

void UHTNExtension_Cooldown::AddTagCooldownDuration(const FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration) {
}

void UHTNExtension_Cooldown::AddCooldownDuration(const UObject* CooldownOwner, float CooldownDuration, bool bAddToExistingDuration) {
}


