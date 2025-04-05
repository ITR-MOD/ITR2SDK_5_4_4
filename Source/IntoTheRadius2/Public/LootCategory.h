#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LootCategory.generated.h"

USTRUCT(BlueprintType)
struct FLootCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootPoints;
    
    INTOTHERADIUS2_API FLootCategory();
};

