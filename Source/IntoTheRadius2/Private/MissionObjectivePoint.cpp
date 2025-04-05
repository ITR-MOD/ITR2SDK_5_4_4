#include "MissionObjectivePoint.h"
#include "Components/BillboardComponent.h"

AMissionObjectivePoint::AMissionObjectivePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("PointIcon"));
    this->PointIcon = (UBillboardComponent*)RootComponent;
}


