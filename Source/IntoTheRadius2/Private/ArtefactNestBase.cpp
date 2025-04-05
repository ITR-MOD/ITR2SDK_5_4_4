#include "ArtefactNestBase.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AArtefactNestBase::AArtefactNestBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
    this->Level = 1;
    this->ArtefactSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ArtefactSpawnPoint"));
    this->ArtefactRef = NULL;
    this->ArtefactSpawnPoint->SetupAttachment(RootComponent);
}

void AArtefactNestBase::OnRep_ArtefactRef() {
}


void AArtefactNestBase::LoadFromGameData() {
}

void AArtefactNestBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArtefactNestBase, ArtefactRef);
}


