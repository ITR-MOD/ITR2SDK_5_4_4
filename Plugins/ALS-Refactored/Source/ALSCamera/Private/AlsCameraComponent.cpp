#include "AlsCameraComponent.h"

UAlsCameraComponent::UAlsCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->Settings = NULL;
    this->PostProcessWeight = 0.00f;
    this->Character = NULL;
    this->PreviousGlobalTimeDilation = 1.00f;
    this->MovementBasePrimitive = NULL;
    this->TraceDistanceRatio = 1.00f;
    this->CameraFOV = 90.00f;
    this->bRightShoulder = true;
}

void UAlsCameraComponent::SetRightShoulder(bool bNewRightShoulder) {
}

void UAlsCameraComponent::GetViewInfo(FMinimalViewInfo& ViewInfo) const {
}

FVector UAlsCameraComponent::GetThirdPersonTraceStartLocation() const {
    return FVector{};
}

FVector UAlsCameraComponent::GetThirdPersonPivotLocation() const {
    return FVector{};
}

FVector UAlsCameraComponent::GetFirstPersonCameraLocation() const {
    return FVector{};
}


