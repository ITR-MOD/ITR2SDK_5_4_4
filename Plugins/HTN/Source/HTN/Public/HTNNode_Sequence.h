#pragma once
#include "CoreMinimal.h"
#include "HTNNode_TwoBranches.h"
#include "HTNNode_Sequence.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNNode_Sequence : public UHTNNode_TwoBranches {
    GENERATED_BODY()
public:
    UHTNNode_Sequence();

};

