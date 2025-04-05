#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FirearmEjectedAmmo.generated.h"

USTRUCT(BlueprintType)
struct FFirearmEjectedAmmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AmmoTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShell;
    
    INTOTHERADIUS2_API FFirearmEjectedAmmo();
};

