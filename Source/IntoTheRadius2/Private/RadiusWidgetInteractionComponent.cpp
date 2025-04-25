#include "RadiusWidgetInteractionComponent.h"

URadiusWidgetInteractionComponent::URadiusWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->Controller = NULL;
    this->Hand = EVRHand::Both;
    this->BeamParticleSystem = NULL;
    this->UiCollisionShape = NULL;
    this->BeamParticleSystemVariableName = TEXT("PointerEnd");
    this->BeamOpacityName = TEXT("BeamOpacity");
    this->BeamParticleOpacityName = TEXT("Opacity");
    this->FingerInteractionBeamThreshold = 30.00f;
    this->InteractionDistanceMenu = 1000.00f;
    this->bCastHover = false;
    this->LinkedMeshComponent = NULL;
    this->OverlappedUiComponent = NULL;
}

void URadiusWidgetInteractionComponent::SetForceShow(const bool bForce) {
}

void URadiusWidgetInteractionComponent::OnEndOverlapUiCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void URadiusWidgetInteractionComponent::OnBeginOverlapUiCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void URadiusWidgetInteractionComponent::LinkBeamSocket(USkeletalMeshComponent* MeshComponent, const FName SocketName) {
}


