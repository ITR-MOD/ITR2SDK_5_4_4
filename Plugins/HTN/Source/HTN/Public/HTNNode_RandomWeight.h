#pragma once
#include "CoreMinimal.h"
#include "HTNStandaloneNode.h"
#include "HTNNode_RandomWeight.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNNode_RandomWeight : public UHTNStandaloneNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomWeight;
    
    UHTNNode_RandomWeight();

};

