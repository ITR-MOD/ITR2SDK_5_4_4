#include "CoverLineOfFireCheck.h"

UCoverLineOfFireCheck::UCoverLineOfFireCheck() {
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DebugDrawTime = 0.00f;
    this->SideOffset = 90.00f;
    this->ShootHeightOffset = 140.00f;
    this->TargetLocationHeightOffset = 0.00f;
    this->TraceShape = EEnvTraceShape::Line;
}


