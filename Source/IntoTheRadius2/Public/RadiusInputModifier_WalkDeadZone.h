#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "RadiusInputModifier_WalkDeadZone.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class INTOTHERADIUS2_API URadiusInputModifier_WalkDeadZone : public UInputModifier {
    GENERATED_BODY()
public:
    URadiusInputModifier_WalkDeadZone();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateThreshold();
    
};

