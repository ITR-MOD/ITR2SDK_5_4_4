#include "HTNDecorator_GuardValue.h"

UHTNDecorator_GuardValue::UHTNDecorator_GuardValue() {
    this->NodeName = TEXT("Guard Value");
    this->bCheckConditionOnPlanEnter = false;
    this->bCheckConditionOnTick = false;
    this->bNotifyOnBlackboardKeyValueChange = false;
    this->bSetValueOnEnterPlan = true;
    this->bRestoreValueOnExitPlan = true;
    this->bRestoreValueOnAbort = true;
}


