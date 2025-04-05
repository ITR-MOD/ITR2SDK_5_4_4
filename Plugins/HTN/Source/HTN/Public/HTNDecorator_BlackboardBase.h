#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "HTNDecorator.h"
#include "HTNDecorator_BlackboardBase.generated.h"

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNDecorator_BlackboardBase : public UHTNDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNotifyOnBlackboardKeyValueChange: 1;
    
public:
    UHTNDecorator_BlackboardBase();

};

