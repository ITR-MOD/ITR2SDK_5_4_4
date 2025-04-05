#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SensePriorityInfo.generated.h"

class UAISense;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FSensePriorityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense> SenseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueOfFullSense;
    
    FSensePriorityInfo();
};

