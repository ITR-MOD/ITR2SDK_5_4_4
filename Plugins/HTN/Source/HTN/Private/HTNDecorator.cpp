#include "HTNDecorator.h"

UHTNDecorator::UHTNDecorator() {
    this->bInverseCondition = false;
    this->bCheckConditionOnPlanEnter = true;
    this->bCheckConditionOnPlanExit = false;
    this->bCheckConditionOnPlanRecheck = false;
    this->bCheckConditionOnTick = true;
    this->bCheckConditionOnTickOnlyOnce = false;
    this->ConditionCheckInterval = 0.00f;
    this->ConditionCheckIntervalRandomDeviation = 0.00f;
    this->TickFunctionInterval = 0.00f;
    this->TickFunctionIntervalRandomDeviation = 0.00f;
}

bool UHTNDecorator::IsInversed() const {
    return false;
}


