#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "CoverBoundBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCoverBoundBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UCoverBoundBoxComponent(const FObjectInitializer& ObjectInitializer);

};

