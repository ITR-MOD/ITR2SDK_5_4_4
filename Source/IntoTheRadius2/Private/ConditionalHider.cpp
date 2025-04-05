#include "ConditionalHider.h"
#include "Components/SceneComponent.h"

AConditionalHider::AConditionalHider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bDeleteCompletely = false;
}

void AConditionalHider::OnAccessLevelChanged(int32 AccessLevel) {
}

void AConditionalHider::CheckConditions() {
}


