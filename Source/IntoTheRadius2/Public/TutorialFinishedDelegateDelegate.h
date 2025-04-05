#pragma once
#include "CoreMinimal.h"
#include "TutorialFinishedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTutorialFinishedDelegate, const FString&, TutorialID, int32, CompletedStepsNum, int32, Seconds, bool, IsTutorialSkipped);

