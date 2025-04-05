#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagToText.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FTagToText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    INTOTHERADIUS2_API FTagToText();
};

