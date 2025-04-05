#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "HTNTask.h"
#include "HTNTask_BlackboardBase.generated.h"

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNTask_BlackboardBase : public UHTNTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    UHTNTask_BlackboardBase();

};

