#include "AITask_MakeHTNPlan.h"

UAITask_MakeHTNPlan::UAITask_MakeHTNPlan() : UAITask(FObjectInitializer::Get()) {
    this->OwnerComponent = NULL;
    this->TopLevelHTN = NULL;
    this->bIsWaitingForNodeToMakePlanExpansions = false;
}


