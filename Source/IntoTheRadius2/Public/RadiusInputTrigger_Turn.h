#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "RadiusInputTrigger_Turn.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, Config=Engine)
class INTOTHERADIUS2_API URadiusInputTrigger_Turn : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnStart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSnapTurn;
    
    URadiusInputTrigger_Turn();

};

