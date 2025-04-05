#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DysfucntionMessageGroup.generated.h"

USTRUCT(BlueprintType)
struct FDysfucntionMessageGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Weapons;
    
    INTOTHERADIUS2_API FDysfucntionMessageGroup();
};

