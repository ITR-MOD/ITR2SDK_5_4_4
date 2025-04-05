#pragma once
#include "CoreMinimal.h"
#include "ENPCState.h"
#include "Templates/SubclassOf.h"
#include "AIFactorClasses.generated.h"

class UAIFactor;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAIFactorClasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCState NPCState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAIFactor>> AIFactorsClasses;
    
    FAIFactorClasses();
};

