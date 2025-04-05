#pragma once
#include "CoreMinimal.h"
#include "OnHighlightChangedDelegate.generated.h"

class ARadiusItemBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnHighlightChanged, bool, bIsHighlight, ARadiusItemBase*, Item);

