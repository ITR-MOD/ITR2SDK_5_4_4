#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FLRadiusConsole.generated.h"

class UObject;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLRadiusConsole : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLRadiusConsole();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenConsoleFull(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenConsole(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTutorialEnabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetConsoleState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CloseConsole(UObject* WorldContextObject);
    
};

