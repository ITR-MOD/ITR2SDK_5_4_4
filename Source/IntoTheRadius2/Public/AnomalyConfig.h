#pragma once
#include "CoreMinimal.h"
#include "AnomalyConfig.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAnomalyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ActorClass;
    
    FAnomalyConfig();
};

