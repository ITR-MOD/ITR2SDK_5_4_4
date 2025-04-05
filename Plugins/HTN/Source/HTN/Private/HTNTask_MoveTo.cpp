#include "HTNTask_MoveTo.h"

UHTNTask_MoveTo::UHTNTask_MoveTo() {
    this->NodeName = TEXT("Move To");
    this->AcceptableRadius = 5.00f;
    this->FilterClass = NULL;
    this->ObservedBlackboardValueTolerance = 4.75f;
    this->bObserveBlackboardValue = false;
    this->bAlwaysRepathWhenBlackboardValueSet = false;
    this->bAllowStrafe = false;
    this->bAllowPartialPath = true;
    this->bTrackMovingGoal = true;
    this->bProjectGoalLocation = true;
    this->bReachTestIncludesAgentRadius = true;
    this->bReachTestIncludesGoalRadius = true;
    this->bTestPathDuringPlanning = true;
    this->bUsePathCostInsteadOfLength = false;
    this->bForcePlanTimeStringPulling = false;
    this->CostPerUnitPathLength = 1.00f;
}


