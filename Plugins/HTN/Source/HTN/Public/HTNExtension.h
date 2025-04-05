#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HTNExtension.generated.h"

class UHTNComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class HTN_API UHTNExtension : public UObject {
    GENERATED_BODY()
public:
    UHTNExtension();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTNComponent* GetHTNComponent() const;
    
};

