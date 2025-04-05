#include "HTNNode_Random.h"

UHTNNode_Random::UHTNNode_Random() {
    this->NodeName = TEXT("Random");
    this->bPlanNextNodesAfterThis = false;
    this->bFallBackToOtherBranchesIfSelectedBranchFailsPlanning = true;
}


