#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusLosslessItem.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FRadiusLosslessItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemInstanceID;
    
    INTOTHERADIUS2_API FRadiusLosslessItem();
};

