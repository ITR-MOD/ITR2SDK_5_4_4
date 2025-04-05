#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsTuple.h"
#include "TagToTagTuplesList.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FTagToTagTuplesList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagsTuple> List;
    
    INTOTHERADIUS2_API FTagToTagTuplesList();
};

