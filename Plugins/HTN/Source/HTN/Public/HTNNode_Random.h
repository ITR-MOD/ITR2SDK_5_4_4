#pragma once
#include "CoreMinimal.h"
#include "HTNStandaloneNode.h"
#include "HTNNode_Random.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNNode_Random : public UHTNStandaloneNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFallBackToOtherBranchesIfSelectedBranchFailsPlanning: 1;
    
public:
    UHTNNode_Random();

};

