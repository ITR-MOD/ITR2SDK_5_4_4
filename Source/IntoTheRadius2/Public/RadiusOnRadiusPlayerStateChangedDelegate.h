#pragma once
#include "CoreMinimal.h"
#include "RadiusOnRadiusPlayerStateChangedDelegate.generated.h"

class ARadiusPlayerCharacter;
class ARadiusPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRadiusOnRadiusPlayerStateChanged, ARadiusPlayerCharacter*, RadiusPlayerCharacter, ARadiusPlayerState*, NewRadiusPlayerState);

