#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask_MoveTo.h"
#include "AITask_HTNMoveTo.generated.h"

UCLASS(Blueprintable)
class UAITask_HTNMoveTo : public UAITask_MoveTo {
    GENERATED_BODY()
public:
    UAITask_HTNMoveTo(const FObjectInitializer& ObjectInitializer);

};

