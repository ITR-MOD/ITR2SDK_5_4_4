#pragma once
#include "CoreMinimal.h"
#include "EMissionObjectiveType.generated.h"

UENUM(BlueprintType)
enum class EMissionObjectiveType : uint8 {
    None,
    GetItems,
    GetArtefacts,
    DeliverItems,
    GoToLocation,
};

