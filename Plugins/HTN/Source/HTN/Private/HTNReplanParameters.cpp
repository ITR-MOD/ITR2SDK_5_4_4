#include "HTNReplanParameters.h"

FHTNReplanParameters::FHTNReplanParameters() {
    this->bForceAbortPlan = false;
    this->bForceRestartActivePlanning = false;
    this->bForceDeferToNextFrame = false;
    this->bReplanOutermostPlanInstance = false;
    this->bForceReplan = false;
    this->bMakeNewPlanRegardlessOfSubPlanSettings = false;
    this->PlanningType = EHTNPlanningType::Normal;
}

