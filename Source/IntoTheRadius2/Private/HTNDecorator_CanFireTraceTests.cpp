#include "HTNDecorator_CanFireTraceTests.h"

UHTNDecorator_CanFireTraceTests::UHTNDecorator_CanFireTraceTests() {
    this->NodeName = TEXT("Can Fire Trace Tests");
    this->CollisionChannel = ECC_WorldStatic;
    this->bUseComplexCollision = false;
    this->bIgnoreSelf = true;
    this->TraceTargetCubeSideHalfLength = 100.00f;
    this->bCheckObstacleAhead = false;
    this->CheckObstacleAheadDistance = 80.00f;
    this->CheckObstacleAheadRadius = 10.00f;
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DebugDrawTime = 5.00f;
}


