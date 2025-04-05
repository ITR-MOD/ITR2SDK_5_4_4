#pragma once
#include "CoreMinimal.h"
#include "HTNReplanParameters.h"
#include "HTNTask.h"
#include "HTNTask_Replan.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNTask_Replan : public UHTNTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHTNReplanParameters Parameters;
    
public:
    UHTNTask_Replan();

};

