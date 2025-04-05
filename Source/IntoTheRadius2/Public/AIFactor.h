#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Curves/CurveFloat.h"
#include "AIFactor.generated.h"

class AActor;
class UNPCConfig;
class URadiusConfigurationSubsystem;

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API UAIFactor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ValuesRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusConfigurationSubsystem* GameConfigSubsystem;
    
public:
    UAIFactor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetNormalizedScore(const AActor* NPCBody, const AActor* Target, const FAIStimulus& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalculateValue(const AActor* NPCBody, const AActor* Target, const FAIStimulus& Stimulus);
    
};

