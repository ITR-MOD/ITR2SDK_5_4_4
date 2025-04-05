#include "DebugAreaDrawComponent.h"

UDebugAreaDrawComponent::UDebugAreaDrawComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Radius = 0.00f;
    this->DrawType = Cylinder;
    this->RadiusDebugDraw = true;
    this->bHiddenInGame = true;
    this->RadiusDebugHeight = 200.00f;
}


