#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "RadiusInputModifier_TurnDeadZone.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class INTOTHERADIUS2_API URadiusInputModifier_TurnDeadZone : public UInputModifierDeadZone {
    GENERATED_BODY()
public:
    URadiusInputModifier_TurnDeadZone();

protected:
    virtual FLinearColor GetVisualizationColor_Implementation(FInputActionValue InValue1, FInputActionValue InValue2) const override;

    virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override;

private:
    UFUNCTION(BlueprintCallable)
    void OnSettingsChanged();
    
};

