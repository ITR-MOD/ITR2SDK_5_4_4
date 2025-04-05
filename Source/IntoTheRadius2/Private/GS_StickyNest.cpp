#include "GS_StickyNest.h"
#include "GripScripts/VRGripScriptBase.h"

UGS_StickyNest::UGS_StickyNest(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    this->bIsActive = true;
    this->WorldTransformOverrideType = EGSTransformOverrideType::OverridesWorldTransform;
    this->NestType = JustHold;
}

void UGS_StickyNest::SetNestRotation(FQuat NewRotation) {
}

void UGS_StickyNest::SetMaxMoveSpeed(float NewSpeed) {
}

void UGS_StickyNest::SetBreakDistance(float NewDistance) {
}


