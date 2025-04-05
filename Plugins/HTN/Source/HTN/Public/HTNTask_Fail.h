#pragma once
#include "CoreMinimal.h"
#include "HTNTask.h"
#include "HTNTask_Fail.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNTask_Fail : public UHTNTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FailureMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFailDuringExecution: 1;
    
public:
    UHTNTask_Fail();

};

