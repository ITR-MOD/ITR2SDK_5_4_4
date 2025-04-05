#include "RadiusGameMode.h"
#include "RadiusGameState.h"
#include "RadiusPlayerController.h"

ARadiusGameMode::ARadiusGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = ARadiusGameState::StaticClass();
    this->PlayerControllerClass = ARadiusPlayerController::StaticClass();
    this->DefaultPawnClass = NULL;
    this->SpectatorClass = NULL;
    this->bUseSeamlessTravel = true;
    this->DefaultNoHMDPawnClass = NULL;
}

void ARadiusGameMode::Server_RespawnPlayer_Implementation(AController* Controller) {
}

void ARadiusGameMode::OnStartLoadLevel(FGameplayTag LevelTag) {
}

void ARadiusGameMode::OnFinishLoadLevel() {
}


