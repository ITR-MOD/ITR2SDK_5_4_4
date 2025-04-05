#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DifficultyOptionBool.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyOptionBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    INTOTHERADIUS2_API FDifficultyOptionBool();
};

