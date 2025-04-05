#pragma once
#include "CoreMinimal.h"
#include "AccuracyParameters.h"
#include "EWeaponInfoParameter.h"
#include "RadiusItemStaticData.h"
#include "RecoilParameters.h"
#include "WeaponParameters.h"
#include "AttachmentStaticData.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAttachmentStaticData : public FRadiusItemStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponInfoParameter, int32> InfoParametersChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccuracyParameters AccuracyParametersChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecoilParameters RecoilParametersChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponParameters WeaponParametersChange;
    
    FAttachmentStaticData();
};

