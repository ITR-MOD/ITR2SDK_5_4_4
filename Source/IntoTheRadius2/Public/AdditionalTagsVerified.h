#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AdditionalTagsVerified.generated.h"

USTRUCT(BlueprintType)
struct FAdditionalTagsVerified {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 Frame;
    
    INTOTHERADIUS2_API FAdditionalTagsVerified();
};

