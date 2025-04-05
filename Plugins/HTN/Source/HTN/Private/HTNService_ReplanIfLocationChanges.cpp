#include "HTNService_ReplanIfLocationChanges.h"

UHTNService_ReplanIfLocationChanges::UHTNService_ReplanIfLocationChanges() {
    this->NodeName = TEXT("Replan If Location Changes");
    this->Tolerance = 100.00f;
    this->bForceAbortPlan = false;
    this->bForceRestartActivePlanning = false;
}


