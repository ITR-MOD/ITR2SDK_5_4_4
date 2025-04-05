#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoverVolumeInfo.h"
#include "VantageCoverManager.generated.h"

class AVolume;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API AVantageCoverManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FCoverVolumeInfo> CoverVolumeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FCoverVolumeInfo> HeightVolumeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> HeightVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> VantageVolumes;
    
    AVantageCoverManager(const FObjectInitializer& ObjectInitializer);

};

