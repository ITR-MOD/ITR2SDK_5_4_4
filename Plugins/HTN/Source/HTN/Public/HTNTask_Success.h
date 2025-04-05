#pragma once
#include "CoreMinimal.h"
#include "HTNTask.h"
#include "HTNTask_Success.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNTask_Success : public UHTNTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
public:
    UHTNTask_Success();

};

