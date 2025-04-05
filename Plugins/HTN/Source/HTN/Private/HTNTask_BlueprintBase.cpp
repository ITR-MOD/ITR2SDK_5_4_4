#include "HTNTask_BlueprintBase.h"

UHTNTask_BlueprintBase::UHTNTask_BlueprintBase() {
    this->OutPlanningTask = NULL;
    this->bShowPropertyDetails = true;
}

void UHTNTask_BlueprintBase::SubmitPlanStep(int32 Cost, const FString& Description) const {
}

void UHTNTask_BlueprintBase::SetPlanningFailureReason(const FString& FailureReason) const {
}










bool UHTNTask_BlueprintBase::IsTaskExecuting() const {
    return false;
}

bool UHTNTask_BlueprintBase::IsTaskAborting() const {
    return false;
}

void UHTNTask_BlueprintBase::FinishExecute(bool bSuccess) {
}

void UHTNTask_BlueprintBase::FinishAbort() {
}

void UHTNTask_BlueprintBase::BP_Replan(const FHTNReplanParameters& Params) const {
}


