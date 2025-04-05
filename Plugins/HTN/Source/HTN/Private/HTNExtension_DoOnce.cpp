#include "HTNExtension_DoOnce.h"

UHTNExtension_DoOnce::UHTNExtension_DoOnce() {
}

bool UHTNExtension_DoOnce::SetDoOnceLocked(const FGameplayTag& Tag, bool bNewLocked) {
    return false;
}

void UHTNExtension_DoOnce::ResetAllDoOnceDecoratorsWithoutGameplayTag() {
}

void UHTNExtension_DoOnce::ResetAllDoOnceDecorators() {
}

bool UHTNExtension_DoOnce::IsDoOnceLocked(const FGameplayTag& Tag) const {
    return false;
}


