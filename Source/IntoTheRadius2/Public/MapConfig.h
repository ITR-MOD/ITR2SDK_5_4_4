#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MarkerPointConfig.h"
#include "MapConfig.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FMapConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LevelCenterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> MapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarkerPointConfig> MarkerPoints;
    
    FMapConfig();
};

