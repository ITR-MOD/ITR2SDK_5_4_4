#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DifficultyOptionBool.h"
#include "DifficultyConfigBool.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyConfigBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyOptionBool IsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyOptionBool IsOff;
    
    INTOTHERADIUS2_API FDifficultyConfigBool();
};

