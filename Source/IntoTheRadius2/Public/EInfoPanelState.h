#pragma once
#include "CoreMinimal.h"
#include "EInfoPanelState.generated.h"

UENUM(BlueprintType)
enum EInfoPanelState {
    Disabled,
    ShowingPlayerInfo,
    ShowingItemInfo,
};

