#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DifficultyOptionFloat.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyOptionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    INTOTHERADIUS2_API FDifficultyOptionFloat();
};

