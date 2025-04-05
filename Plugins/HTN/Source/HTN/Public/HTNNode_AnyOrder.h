#pragma once
#include "CoreMinimal.h"
#include "HTNNode_TwoBranches.h"
#include "HTNNode_AnyOrder.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNNode_AnyOrder : public UHTNNode_TwoBranches {
    GENERATED_BODY()
public:
    UHTNNode_AnyOrder();

};

