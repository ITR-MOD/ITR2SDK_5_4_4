#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StoreCartState.generated.h"

USTRUCT(BlueprintType)
struct FStoreCartState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoneyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ItemTags;
    
    INTOTHERADIUS2_API FStoreCartState();
};

