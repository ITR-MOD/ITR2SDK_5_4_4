#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DifficultyOptionFloat.h"
#include "DifficultyConfigFloat.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyConfigFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDifficultyOptionFloat> Values;
    
    INTOTHERADIUS2_API FDifficultyConfigFloat();
};

