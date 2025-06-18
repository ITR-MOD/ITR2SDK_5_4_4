#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERadiusPlatformType.h"
#include "RadiusConfigurationAssetBase.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusConfigurationAssetBase : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    ERadiusPlatformType Platform;

    URadiusConfigurationAssetBase();

};

