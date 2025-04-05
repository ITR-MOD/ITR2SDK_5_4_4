#include "LevelGateBase.h"

ALevelGateBase::ALevelGateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreAsStart = false;
}

FTransform ALevelGateBase::GetPivotExitTransform_Implementation() const {
    return FTransform{};
}

TArray<FGameplayTag> ALevelGateBase::GetLinkedGateTags_Implementation() const {
    return TArray<FGameplayTag>();
}

FGameplayTag ALevelGateBase::GetGateTag_Implementation() const {
    return FGameplayTag{};
}


