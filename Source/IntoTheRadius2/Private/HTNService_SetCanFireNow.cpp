#include "HTNService_SetCanFireNow.h"

UHTNService_SetCanFireNow::UHTNService_SetCanFireNow() {
    this->NodeName = TEXT("SetCanFireNow");
    this->bIgnoreSelf = false;
    this->CollisionChannel = ECC_WorldStatic;
    this->bUseComplexCollision = false;
    this->StopPredictionTime = 0.50f;
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DebugDrawTime = 0.00f;
    this->NPCConfig = NULL;
}


