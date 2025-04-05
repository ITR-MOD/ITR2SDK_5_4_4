#include "HTNComponent.h"
#include "HTNPlanInstance.h"
#include "Templates/SubclassOf.h"
#include "WorldStateProxy.h"

UHTNComponent::UHTNComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->MaxPlanLength = 100;
    this->MaxNestedSubPlanDepth = 100;
    this->CurrentHTNAsset = NULL;
    this->PendingHTNAsset = NULL;
    this->RootPlanInstance = CreateDefaultSubobject<UHTNPlanInstance>(TEXT("RootPlanInstance"));
    this->PlanningWorldStateProxy = CreateDefaultSubobject<UWorldStateProxy>(TEXT("WorldStateProxy"));
    this->BlackboardProxy = CreateDefaultSubobject<UWorldStateProxy>(TEXT("BlackboardProxy"));
}

void UHTNComponent::StopHTN(bool bDisregardLatentAbort) {
}

void UHTNComponent::StartHTN(UHTN* Asset) {
}

bool UHTNComponent::SetDynamicHTN(FGameplayTag InjectTag, UHTN* HTN, bool bForceReplanIfChangedNodesInCurrentPlan, bool bForceReplanIfChangedDuringPlanning, bool bForceAbortCurrentPlanIfForcingReplan) {
    return false;
}

bool UHTNComponent::RemoveExtensionByClass(TSubclassOf<UHTNExtension> ExtensionClass) {
    return false;
}

bool UHTNComponent::IsWaitingForAbortingTasks() const {
    return false;
}

bool UHTNComponent::IsStoppingHTN() const {
    return false;
}

bool UHTNComponent::IsPlanning() const {
    return false;
}

bool UHTNComponent::IsAbortingPlan() const {
    return false;
}

bool UHTNComponent::HasPlan() const {
    return false;
}

bool UHTNComponent::HasDeferredStop() const {
    return false;
}

bool UHTNComponent::HasDeferredAbort() const {
    return false;
}

bool UHTNComponent::HasActiveTasks() const {
    return false;
}

bool UHTNComponent::HasActivePlan() const {
    return false;
}

UWorldStateProxy* UHTNComponent::GetWorldStateProxy(bool bForPlanning) const {
    return NULL;
}

UHTN* UHTNComponent::GetDynamicHTN(FGameplayTag InjectTag) const {
    return NULL;
}

UHTN* UHTNComponent::GetCurrentHTN() const {
    return NULL;
}

float UHTNComponent::GetCooldownEndTime(const UObject* CooldownOwner) const {
    return 0.0f;
}

UWorldStateProxy* UHTNComponent::GetBlackboardProxy() const {
    return NULL;
}

UHTNExtension* UHTNComponent::FindOrAddExtensionByClass(TSubclassOf<UHTNExtension> ExtensionClass) {
    return NULL;
}

void UHTNComponent::CancelActivePlanning() {
}

void UHTNComponent::BP_Replan(const FHTNReplanParameters& Params) {
}

UHTNExtension* UHTNComponent::BP_FindExtensionByClass(EHTNFindExtensionResult& OutResult, TSubclassOf<UHTNExtension> ExtensionClass) const {
    return NULL;
}

void UHTNComponent::AddCooldownDuration(const UObject* CooldownOwner, float CooldownDuration, bool bAddToExistingDuration) {
}


