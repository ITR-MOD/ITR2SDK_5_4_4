#include "RadiusShell.h"
#include "Components/StaticMeshComponent.h"

ARadiusShell::ARadiusShell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shell Mesh"));
    this->ShellMeshComponent = (UStaticMeshComponent*)RootComponent;
}

void ARadiusShell::OnPushToPool_Implementation() {
}

void ARadiusShell::OnPopFromPool_Implementation(const FTransform Transform) {
}

bool ARadiusShell::IsExcludedFromPool_Implementation() {
    return false;
}


