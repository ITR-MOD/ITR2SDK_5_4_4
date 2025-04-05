#include "RadiusPlayerCharacterGameplay.h"
#include "PlayerStatsComponent.h"
#include "RadiusPhysicalHand.h"

ARadiusPlayerCharacterGameplay::ARadiusPlayerCharacterGameplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicsHandLeft = CreateDefaultSubobject<URadiusPhysicalHand>(TEXT("PhysicsHandLeft"));
    this->PhysicsGripLeft = NULL;
    this->GrabSphereLeft = NULL;
    this->PhysicsHandRight = CreateDefaultSubobject<URadiusPhysicalHand>(TEXT("PhysicsHandRight"));
    this->PhysicsGripRight = NULL;
    this->GrabSphereRight = NULL;
    this->PlayerStats = CreateDefaultSubobject<UPlayerStatsComponent>(TEXT("PlayerStats"));
    this->PhysicsHandLeft->SetupAttachment(VRProxyComponent);
    this->PhysicsHandRight->SetupAttachment(VRProxyComponent);
}

void ARadiusPlayerCharacterGameplay::UpdateBodyCalibration_Implementation() const {
}

void ARadiusPlayerCharacterGameplay::OnPossessed(APawn* Pawn) {
}

void ARadiusPlayerCharacterGameplay::HandleOnPlayerHeightOffsetChanged(float PlayerHeightOffset) {
}

ARadiusPlayerStateGameplay* ARadiusPlayerCharacterGameplay::GetRadiusPlayerStateGameplay() {
    return NULL;
}


void ARadiusPlayerCharacterGameplay::Delayed_InitializeContainer_Internal() {
}


