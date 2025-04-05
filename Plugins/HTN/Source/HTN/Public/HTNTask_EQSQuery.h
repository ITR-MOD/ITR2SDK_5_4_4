#pragma once
#include "CoreMinimal.h"
#include "EQSParametrizedQueryExecutionRequestHTN.h"
#include "HTNTask_BlackboardBase.h"
#include "HTNTask_EQSQuery.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNTask_EQSQuery : public UHTNTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequestHTN EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumCandidatePlans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
public:
    UHTNTask_EQSQuery();

};

