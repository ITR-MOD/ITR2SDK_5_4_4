#pragma once
#include "CoreMinimal.h"
#include "HTNTask.h"
#include "HTNTask_Log.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UHTNTask_Log : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UHTNTask_Log();

};

