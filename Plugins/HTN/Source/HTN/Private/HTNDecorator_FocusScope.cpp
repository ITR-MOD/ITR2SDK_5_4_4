#include "HTNDecorator_FocusScope.h"

UHTNDecorator_FocusScope::UHTNDecorator_FocusScope() {
    this->bCheckConditionOnPlanEnter = false;
    this->bCheckConditionOnTick = false;
    this->bSetNewFocus = true;
    this->bObserveBlackboardValue = false;
    this->bUpdateFocalPointFromRotatorKeyEveryFrame = true;
    this->bRestoreOldFocusOnExecutionFinish = true;
    this->FocusPriority = 2;
    this->RotationKeyLookAheadDistance = 10000.00f;
}


