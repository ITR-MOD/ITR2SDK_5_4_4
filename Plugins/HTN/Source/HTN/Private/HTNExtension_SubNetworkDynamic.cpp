#include "HTNExtension_SubNetworkDynamic.h"

UHTNExtension_SubNetworkDynamic::UHTNExtension_SubNetworkDynamic() {
}

bool UHTNExtension_SubNetworkDynamic::SetDynamicHTN(FGameplayTag InjectTag, UHTN* HTN, bool bForceReplanIfChangedNodesInCurrentPlan, bool bForceReplanIfChangedDuringPlanning, bool bForceAbortCurrentPlanIfForcingReplan) {
    return false;
}

void UHTNExtension_SubNetworkDynamic::ResetDynamicHTNs() {
}

UHTN* UHTNExtension_SubNetworkDynamic::GetDynamicHTN(FGameplayTag InjectTag) const {
    return NULL;
}


