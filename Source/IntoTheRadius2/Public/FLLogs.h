#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FLLogs.generated.h"

class UObject;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLLogs : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLLogs();

    UFUNCTION(BlueprintCallable)
    static void LogZak(UObject* LogContextObject, const FString& Message);

    UFUNCTION(BlueprintCallable)
    static void LogHolster(UObject* LogContextObject, const FString& Message);

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static void LogD(UObject* WorldContextObject, const FString& Message);

    UFUNCTION(BlueprintCallable)
    static void LogCannedCanFish(UObject* LogContextObject, const FString& Message);

    UFUNCTION(BlueprintCallable)
    static void LogBackpack(UObject* LogContextObject, const FString& Message);

    UFUNCTION(BlueprintCallable)
    static void LogAmmoBox(UObject* LogContextObject, const FString& Message);

};

