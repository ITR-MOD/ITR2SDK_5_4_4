#include "RadiusMissionObjectiveBase.h"
#include "Net/UnrealNetwork.h"

URadiusMissionObjectiveBase::URadiusMissionObjectiveBase() {
    this->OwningMission = NULL;
    this->ObjectiveConfig = NULL;
    this->bHasBegun = false;
}

void URadiusMissionObjectiveBase::UndoObjective() {
}

void URadiusMissionObjectiveBase::OnRep_OwningMission() {
}

EMissionObjectiveType URadiusMissionObjectiveBase::GetObjectiveType() {
    return EMissionObjectiveType::None;
}

void URadiusMissionObjectiveBase::GetObjectiveDescriptions(FText& ShortDescription, FText& LongDescription) {
}

URadiusMissionObjectiveConfigBase* URadiusMissionObjectiveBase::GetObjectiveConfig() {
    return NULL;
}

void URadiusMissionObjectiveBase::FinishObjective() {
}

bool URadiusMissionObjectiveBase::CanFinishObjective() {
    return false;
}

bool URadiusMissionObjectiveBase::BeginObjective() {
    return false;
}

void URadiusMissionObjectiveBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusMissionObjectiveBase, OwningMission);
}


