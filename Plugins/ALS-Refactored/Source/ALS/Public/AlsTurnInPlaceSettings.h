#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AlsTurnInPlaceSettings.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, EditInlineNew)
class ALS_API UAlsTurnInPlaceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScalePlayRateByAnimatedTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimatedTurnAngle;
    
    UAlsTurnInPlaceSettings();

};

