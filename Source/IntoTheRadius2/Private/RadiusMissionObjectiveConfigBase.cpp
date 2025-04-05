#include "RadiusMissionObjectiveConfigBase.h"

URadiusMissionObjectiveConfigBase::URadiusMissionObjectiveConfigBase() {
    this->bShouldTriggerGoalUpdate = true;
    this->ObjectiveDescription = FText::FromString(TEXT("- untitled - "));
    this->FullObjectiveDescription = FText::FromString(TEXT("- untitled - "));
}

URadiusMissionObjectiveBase* URadiusMissionObjectiveConfigBase::CreateObjective(UObject* Outer) {
    return NULL;
}


