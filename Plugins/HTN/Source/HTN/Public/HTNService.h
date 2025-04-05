#pragma once
#include "CoreMinimal.h"
#include "HTNNode.h"
#include "HTNService.generated.h"

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNService : public UHTNNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickIntervalRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePersistentTickCountdown: 1;
    
public:
    UHTNService();

};

