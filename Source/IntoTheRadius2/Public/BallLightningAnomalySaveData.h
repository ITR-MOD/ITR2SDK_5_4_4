#pragma once
#include "CoreMinimal.h"
#include "AnomalySaveData.h"
#include "BallLightningAnomalySaveData.generated.h"

class UBallLightningAnomalySaveData;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UBallLightningAnomalySaveData : public UAnomalySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHidden;
    
    UBallLightningAnomalySaveData();

    UFUNCTION(BlueprintCallable)
    static UBallLightningAnomalySaveData* CreateBallLightningAnomalySaveData();
    
};

