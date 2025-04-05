#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EQSParametrizedQueryExecutionRequestHTN.h"
#include "HTNTask_BlackboardBase.h"
#include "HTNTask_EQSQueryCover.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UHTNTask_EQSQueryCover : public UHTNTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LocationBlackboardKey;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequestHTN EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumCandidatePlans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
public:
    UHTNTask_EQSQueryCover();

};

