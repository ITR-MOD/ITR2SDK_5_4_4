#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagToTagsList.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FTagToTagsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> List;
    
    INTOTHERADIUS2_API FTagToTagsList();
};

