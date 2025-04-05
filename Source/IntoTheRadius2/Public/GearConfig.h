#pragma once
#include "CoreMinimal.h"
#include "AttachableItemInfo.h"
#include "GearConfig.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FGearConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachableItemInfo> ItemsConfig;
    
    FGearConfig();
};

