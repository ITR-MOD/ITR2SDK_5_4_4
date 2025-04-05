#include "HTNDecorator_Blackboard.h"

UHTNDecorator_Blackboard::UHTNDecorator_Blackboard() {
    this->bCheckConditionOnTickOnlyOnce = true;
    this->IntValue = 0;
    this->FloatValue = 0.00f;
    this->OperationType = 0;
    this->bCanAbortPlanInstantly = true;
}


