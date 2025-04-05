#pragma once
#include "CoreMinimal.h"
#include "DynamicDataLinkChangeDelegateDelegate.generated.h"

class URadiusItemDynamicData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynamicDataLinkChangeDelegate, URadiusItemDynamicData*, PreviousDynamicData);

