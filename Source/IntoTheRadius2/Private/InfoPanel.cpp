#include "InfoPanel.h"
#include "Components/SceneComponent.h"
#include "RadiusWidgetComponent.h"

AInfoPanel::AInfoPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ItemInfoWidgetComponent = CreateDefaultSubobject<URadiusWidgetComponent>(TEXT("Item Info Component"));
    this->PlayerInfoWidgetComponent = CreateDefaultSubobject<URadiusWidgetComponent>(TEXT("Player Info Component"));
    this->ItemInfo = NULL;
    this->PlayerInfo = NULL;
    this->OwnerPawn = NULL;
}

void AInfoPanel::UpdateTransform(const FVector NewLocation, const FRotator NewRotation) {
}

void AInfoPanel::ShowPlayerInfo() {
}

void AInfoPanel::ShowItemInfo(URadiusDataComponent* DataComponent) {
}

void AInfoPanel::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

TEnumAsByte<EInfoPanelState> AInfoPanel::GetInfoPanelState() {
    return Disabled;
}

void AInfoPanel::Disable() {
}


