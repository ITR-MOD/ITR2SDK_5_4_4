#pragma once
#include "CoreMinimal.h"
#include "HTNStandaloneNode.h"
#include "HTNNode_TwoBranches.generated.h"

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNNode_TwoBranches : public UHTNStandaloneNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPrimaryNodes;
    
    UHTNNode_TwoBranches();

};

