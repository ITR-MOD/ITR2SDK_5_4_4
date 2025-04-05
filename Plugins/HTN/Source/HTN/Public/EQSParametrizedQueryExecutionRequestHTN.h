#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EQSParametrizedQueryExecutionRequestHTN.generated.h"

USTRUCT(BlueprintType)
struct HTN_API FEQSParametrizedQueryExecutionRequestHTN : public FEQSParametrizedQueryExecutionRequest {
    GENERATED_BODY()
public:
    FEQSParametrizedQueryExecutionRequestHTN();
};

