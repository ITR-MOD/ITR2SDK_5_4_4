#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ItemContainerInterface.h"
#include "BoxVolumeContainerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UBoxVolumeContainerComponent : public UBoxComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UBoxVolumeContainerComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

