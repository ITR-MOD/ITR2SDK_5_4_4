#include "RadiusGameInstance.h"

URadiusGameInstance::URadiusGameInstance(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    this->bIsSaveLoadTemporarilyDisabled = false;
    this->LevelLoadedEventTrigger = NULL;
    this->IngameMenuClass = NULL;
    this->ClimbableActorBaseClass = NULL;
    this->GripSelectorsControllerClass = NULL;
}


void URadiusGameInstance::OnFinishLoadLevel() {
}


