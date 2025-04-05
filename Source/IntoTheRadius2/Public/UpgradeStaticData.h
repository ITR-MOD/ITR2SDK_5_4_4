#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AccuracyParameters.h"
#include "AmmoContainerParameters.h"
#include "EWeaponInfoParameter.h"
#include "ItemParameters.h"
#include "ItemShopInfo.h"
#include "RadiusItemStaticData.h"
#include "RecoilParameters.h"
#include "WeaponParameters.h"
#include "UpgradeStaticData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FUpgradeStaticData : public FRadiusItemStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UpgradeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ConflictUpgradeIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RequiredUpgradeIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstallPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowInInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponInfoParameter, int32> InfoParametersChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemShopInfo ItemPricesChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemParameters ItemParametersChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccuracyParameters AccuracyParametersChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecoilParameters RecoilParametersChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponParameters WeaponParametersChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmmoContainerParameters AmmoContainerParametersChange;
    
    FUpgradeStaticData();
};

