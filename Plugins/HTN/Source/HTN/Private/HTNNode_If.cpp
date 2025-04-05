#include "HTNNode_If.h"

UHTNNode_If::UHTNNode_If() {
    this->bAllowFailingDecoratorsOnNodeDuringPlanning = true;
    this->bCanConditionsInterruptTrueBranch = true;
    this->bCanConditionsInterruptFalseBranch = true;
    this->PlanAdjustmentMode = EHTNNodeIfPlanAdjustmentMode::NoAdjustmentAllowed;
}


