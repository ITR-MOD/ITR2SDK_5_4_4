#include "HTNDecorator_BlueprintBase.h"

UHTNDecorator_BlueprintBase::UHTNDecorator_BlueprintBase() {
    this->bShowPropertyDetails = true;
}










void UHTNDecorator_BlueprintBase::BP_Replan(const FHTNReplanParameters& Params) const {
}

bool UHTNDecorator_BlueprintBase::BP_NotifyEventBasedCondition(bool bRawConditionValue, bool bCanAbortPlanInstantly) {
    return false;
}


