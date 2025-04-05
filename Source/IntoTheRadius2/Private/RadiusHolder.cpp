#include "RadiusHolder.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "RadiusInitializeComponent.h"

ARadiusHolder::ARadiusHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bOnlyOwnerCanInteract = false;
    this->bPreventCollisionWithAttachedItem = true;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->InitializeComponent = CreateDefaultSubobject<URadiusInitializeComponent>(TEXT("Initialize Component"));
}

void ARadiusHolder::TryUpdateHolsteredActors() {
}

void ARadiusHolder::SpawnSavedItems() {
}

void ARadiusHolder::OnRep_HolsteredActors_Implementation() {
}

void ARadiusHolder::OnDataUnlinking_Implementation(URadiusItemDynamicData* PreviousDynamicData) {
}

void ARadiusHolder::InitializeContainer_Internal() {
}

void ARadiusHolder::Continue_SpawnSavedItems(const TArray<TWeakObjectPtr<UObject>>& ItemActors) {
}

void ARadiusHolder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARadiusHolder, HolsteredActors);
}


