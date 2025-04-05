#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HTNDecorator.h"
#include "HTNDecorator_IsTagCooldownInactive.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UHTNDecorator_IsTagCooldownInactive : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CooldownTag;
    
    UHTNDecorator_IsTagCooldownInactive();

};

