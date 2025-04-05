#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemConfiguration.h"
#include "LootToSpawn.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FLootToSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemConfiguration ItemConfiguration;
    
    INTOTHERADIUS2_API FLootToSpawn();
};

