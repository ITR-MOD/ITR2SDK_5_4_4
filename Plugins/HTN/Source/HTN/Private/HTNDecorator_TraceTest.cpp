#include "HTNDecorator_TraceTest.h"

UHTNDecorator_TraceTest::UHTNDecorator_TraceTest() {
    this->NodeName = TEXT("Trace Test");
    this->TraceFromZOffset = 0.00f;
    this->TraceToZOffset = 0.00f;
    this->CollisionChannel = ECC_WorldStatic;
    this->bUseComplexCollision = false;
    this->bIgnoreSelf = true;
    this->TraceShape = EEnvTraceShape::Line;
    this->TraceExtentX = 0.00f;
    this->TraceExtentY = 0.00f;
    this->TraceExtentZ = 0.00f;
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DebugDrawTime = 5.00f;
}


