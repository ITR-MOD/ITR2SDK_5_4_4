#include "RadiusAISightZoneDebugComponent.h"

URadiusAISightZoneDebugComponent::URadiusAISightZoneDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistCentimeters = 1000.00f;
    this->HorizontalAngle = 30.00f;
    this->VerticalAngle = 15.00f;
    this->SphereMesh = NULL;
    this->FrustumMesh = NULL;
    this->MaterialInterface = NULL;
    this->bEnableComputeMeshPool = true;
    this->DynamicMeshPool = NULL;
}

void URadiusAISightZoneDebugComponent::Update() {
}

void URadiusAISightZoneDebugComponent::Setup(float Radius, float HAngle, float VAngle) {
}


