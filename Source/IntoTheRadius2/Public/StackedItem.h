#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StackedItem.generated.h"

USTRUCT(BlueprintType)
struct FStackedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShell;
    
    INTOTHERADIUS2_API FStackedItem();
};

