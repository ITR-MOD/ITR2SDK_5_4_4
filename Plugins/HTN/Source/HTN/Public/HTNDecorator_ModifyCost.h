#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator.h"
#include "HTNDecorator_ModifyCost.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNDecorator_ModifyCost : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Bias;
    
    UHTNDecorator_ModifyCost();

};

