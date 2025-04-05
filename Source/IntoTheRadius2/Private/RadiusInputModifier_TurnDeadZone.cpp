#include "RadiusInputModifier_TurnDeadZone.h"

URadiusInputModifier_TurnDeadZone::URadiusInputModifier_TurnDeadZone() {
}

void URadiusInputModifier_TurnDeadZone::OnSettingsChanged() {
}

FLinearColor URadiusInputModifier_TurnDeadZone::GetVisualizationColor_Implementation(FInputActionValue InValue1, FInputActionValue InValue2) const {
    return FLinearColor::White;  // Modify as needed.
}

FInputActionValue URadiusInputModifier_TurnDeadZone::ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) {
    return CurrentValue;  // Modify as needed.
}
