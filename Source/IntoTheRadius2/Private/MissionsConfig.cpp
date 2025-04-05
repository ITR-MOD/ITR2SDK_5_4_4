#include "MissionsConfig.h"

UMissionsConfig::UMissionsConfig() {
    this->MissionRerollCost = 300;
}

FLinearColor UMissionsConfig::GetIconColorForCategory(const FGameplayTag CategoryId) const {
    return FLinearColor{};
}

FMissionPoint UMissionsConfig::FindMissionPoint(const FGameplayTag PointTag, FGameplayTag& OutLevel) const {
    return FMissionPoint{};
}

FGameplayTag UMissionsConfig::FindCategoryByMissionId(const FGameplayTag MissionId) const {
    return FGameplayTag{};
}


