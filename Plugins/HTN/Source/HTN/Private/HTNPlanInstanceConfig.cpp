#include "HTNPlanInstanceConfig.h"

FHTNPlanInstanceConfig::FHTNPlanInstanceConfig() {
    this->SucceededReaction = EHTNPlanInstanceFinishReaction::Succeed;
    this->FailedReaction = EHTNPlanInstanceFinishReaction::Succeed;
    this->bPlanDuringExecution = false;
    this->bSkipPlanningOnFirstExecutionIfPlanAlreadyAvailable = false;
    this->Depth = 0;
    this->RootNodeOverride = NULL;
}

