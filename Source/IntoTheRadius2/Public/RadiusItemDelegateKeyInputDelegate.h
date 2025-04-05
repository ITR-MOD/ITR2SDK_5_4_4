#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "RadiusItemDelegateKeyInputDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRadiusItemDelegateKeyInput, FKey, Key, TEnumAsByte<EInputEvent>, KeyEvent);

