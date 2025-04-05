#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LootTableConfig.h"
#include "RadiusConfigurationAssetBase.h"
#include "LootConfig.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ULootConfig : public URadiusConfigurationAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLootTableConfig> LootArray;
    
    ULootConfig();

};

