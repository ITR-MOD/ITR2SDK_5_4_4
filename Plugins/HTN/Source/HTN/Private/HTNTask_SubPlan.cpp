#include "HTNTask_SubPlan.h"

UHTNTask_SubPlan::UHTNTask_SubPlan() {
    this->bPlanNextNodesAfterThis = false;
    this->bShowTaskNameOnCurrentPlanVisualization = false;
    this->bPlanDuringOuterPlanPlanning = false;
    this->bPlanDuringExecution = true;
    this->bSkipPlanningOnFirstExecutionIfPlanAlreadyAvailable = true;
    this->OnSubPlanSucceeded = EHTNPlanInstanceFinishReaction::Succeed;
    this->OnSubPlanFailed = EHTNPlanInstanceFinishReaction::Fail;
    this->OnThisNodeAborted = EHTNSubPlanNodeAbortedReaction::AbortSubPlanExecution;
}


