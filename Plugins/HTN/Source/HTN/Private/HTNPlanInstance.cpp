#include "HTNPlanInstance.h"

UHTNPlanInstance::UHTNPlanInstance() {
    this->Status = EHTNPlanInstanceStatus::NotStarted;
    this->OwnerComponent = NULL;
    this->CurrentPlanningTask = NULL;
}


