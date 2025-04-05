#pragma once
#include "CoreMinimal.h"
#include "HTNStandaloneNode.h"
#include "HTNNode_SubNetwork.generated.h"

class UHTN;

UCLASS(Blueprintable)
class HTN_API UHTNNode_SubNetwork : public UHTNStandaloneNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* HTN;
    
    UHTNNode_SubNetwork();

};

