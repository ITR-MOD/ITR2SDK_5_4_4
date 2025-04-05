#include "RadiusALSCharacter.h"

ARadiusALSCharacter::ARadiusALSCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputMappingContext = NULL;
    this->LookMouseAction = NULL;
    this->LookAction = NULL;
    this->MoveAction = NULL;
    this->SprintAction = NULL;
    this->WalkAction = NULL;
    this->CrouchAction = NULL;
    this->JumpAction = NULL;
    this->AimAction = NULL;
    this->RagdollAction = NULL;
    this->RollAction = NULL;
    this->RotationModeAction = NULL;
    this->ViewModeAction = NULL;
    this->SwitchShoulderAction = NULL;
    this->LookUpMouseSensitivity = 1.00f;
    this->LookRightMouseSensitivity = 1.00f;
    this->LookUpRate = 90.00f;
    this->LookRightRate = 240.00f;
}


