#pragma once
#include "CoreMinimal.h"
#include "ConditionsList.generated.h"

class URadiusCondition;

USTRUCT(Atomic, BlueprintType)
struct INTOTHERADIUS2_API FConditionsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URadiusCondition*> Conditions;
    
    FConditionsList();
};

