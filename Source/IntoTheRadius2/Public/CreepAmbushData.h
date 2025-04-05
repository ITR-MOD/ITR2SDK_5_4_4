#pragma once
#include "CoreMinimal.h"
#include "CreepAmbushConfig.h"
#include "CreepAmbushData.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FCreepAmbushData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreepAmbushConfig> Ambushes;
    
    FCreepAmbushData();
};

