#include "AlsAIController.h"

AAlsAIController::AAlsAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttachToPawn = true;
    this->BehaviorTree = NULL;
}


