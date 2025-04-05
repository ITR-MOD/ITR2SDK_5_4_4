#pragma once
#include "CoreMinimal.h"
#include "HTNComponent.h"
#include "RadiusHTNComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusHTNComponent : public UHTNComponent {
    GENERATED_BODY()
public:
    URadiusHTNComponent(const FObjectInitializer& ObjectInitializer);

};

