#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FLOpenXRExpansion.generated.h"

class UObject;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLOpenXRExpansion : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLOpenXRExpansion();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsValveIndex(const UObject* WorldContextObject);
    
};

