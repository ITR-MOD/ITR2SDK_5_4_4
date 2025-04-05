#include "HTNDecorator_RadiusFocusScope.h"

UHTNDecorator_RadiusFocusScope::UHTNDecorator_RadiusFocusScope() {
    this->bCheckConditionOnPlanEnter = false;
    this->bCheckConditionOnTick = false;
    this->bSetNewFocus = true;
    this->bObserveBlackboardValue = false;
    this->bUpdateFocalPointFromVectorKeyEveryFrame = true;
    this->bRestoreOldFocusOnExecutionFinish = true;
    this->RotationSpeed = 3.00f;
    this->FocusPriority = 2;
    this->RotationKeyLookAheadDistance = 10000.00f;
}


