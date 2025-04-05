#pragma once
#include "CoreMinimal.h"
#include "SightShapeInfo.h"
#include "PeripheralVisionInfo.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FPeripheralVisionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSightShapeInfo MainZoneIdle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSightShapeInfo MainZoneCombat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSightShapeInfo SideZoneIdle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSightShapeInfo SideZoneCombat;
    
    FPeripheralVisionInfo();
};

