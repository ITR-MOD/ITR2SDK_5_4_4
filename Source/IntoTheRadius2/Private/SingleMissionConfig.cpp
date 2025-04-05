#include "SingleMissionConfig.h"

USingleMissionConfig::USingleMissionConfig() {
    this->bIsTopPriority = false;
    this->MissionCooldown = 1;
    this->MissionName = FText::FromString(TEXT("- untitled - "));
    this->Description = FText::FromString(TEXT("- untitled - "));
    this->bMarkTutorialFinished = false;
    this->bDefaultPlayerLocationIfInvalid = false;
}

int32 USingleMissionConfig::GetMoneyReward(UObject* WorldContextObject) const {
    return 0;
}

int32 USingleMissionConfig::GetAccessPointsThreshold() const {
    return 0;
}

bool USingleMissionConfig::CheckConditions() const {
    return false;
}


