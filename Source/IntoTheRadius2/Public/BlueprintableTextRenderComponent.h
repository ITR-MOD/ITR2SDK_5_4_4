#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "BlueprintableTextRenderComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UBlueprintableTextRenderComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UBlueprintableTextRenderComponent(const FObjectInitializer& ObjectInitializer);

};

