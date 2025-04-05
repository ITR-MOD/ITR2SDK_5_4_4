#include "HTNDecorator_DoOnce.h"

UHTNDecorator_DoOnce::UHTNDecorator_DoOnce() {
    this->bCheckConditionOnTickOnlyOnce = true;
    this->bLockEvenIfExecutionAborted = true;
    this->bCanAbortPlanInstantly = true;
}


