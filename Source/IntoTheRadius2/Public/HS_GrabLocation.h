#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HS_GrabLocation.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UHS_GrabLocation : public USceneComponent {
    GENERATED_BODY()
public:
    UHS_GrabLocation(const FObjectInitializer& ObjectInitializer);

};

