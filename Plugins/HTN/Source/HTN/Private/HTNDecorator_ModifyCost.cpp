#include "HTNDecorator_ModifyCost.h"

UHTNDecorator_ModifyCost::UHTNDecorator_ModifyCost() {
    this->NodeName = TEXT("Modify Cost");
    this->bCheckConditionOnPlanEnter = false;
    this->bCheckConditionOnTick = false;
    this->Scale = 1.00f;
    this->Bias = 0;
}


