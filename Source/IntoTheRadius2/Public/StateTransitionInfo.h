#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ENPCState.h"
#include "StateTransitionInfo.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FStateTransitionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCState From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCState To;
    
    FStateTransitionInfo();
};

