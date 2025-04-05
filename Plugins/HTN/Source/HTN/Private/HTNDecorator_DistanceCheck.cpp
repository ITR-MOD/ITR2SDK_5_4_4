#include "HTNDecorator_DistanceCheck.h"

UHTNDecorator_DistanceCheck::UHTNDecorator_DistanceCheck() {
    this->CheckMode = EHTNDecoratorDistanceCheckMode::Distance3D;
    this->CapsuleHalfHeight = 90.00f;
    this->CapsuleRadius = 0.00f;
    this->bAllMustPass = true;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
}


