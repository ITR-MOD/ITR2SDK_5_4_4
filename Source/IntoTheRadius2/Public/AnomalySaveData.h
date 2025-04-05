#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnomalySaveData.generated.h"

class UAnomalySaveData;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UAnomalySaveData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceAlongSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeleportPosition;
    
    UAnomalySaveData();

    UFUNCTION(BlueprintCallable)
    static UAnomalySaveData* CreateAnomalySaveData();
    
};

