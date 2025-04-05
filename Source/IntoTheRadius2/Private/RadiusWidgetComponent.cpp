#include "RadiusWidgetComponent.h"

URadiusWidgetComponent::URadiusWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableWhileIngameMenu = true;
    this->bDisableWhileDead = true;
    this->bDisableForOtherPlayers = false;
}

void URadiusWidgetComponent::OnPlayerPossessedPawn(APawn* PlayerPawn) {
}

void URadiusWidgetComponent::OnPlayerDied(APawn* PlayerPawn, AActor* DamageCauser) {
}

void URadiusWidgetComponent::OnIngameMenuOpened() {
}

void URadiusWidgetComponent::OnIngameMenuClosed() {
}


