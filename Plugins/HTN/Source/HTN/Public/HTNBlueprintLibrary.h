#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HTNBlueprintLibrary.generated.h"

class AAIController;
class UHTN;
class UHTNComponent;

UCLASS(Blueprintable)
class HTN_API UHTNBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHTNBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static UHTNComponent* SetUpHTNComponent(AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    static bool RunHTN(AAIController* AIController, UHTN* HTNAsset);
    
};

