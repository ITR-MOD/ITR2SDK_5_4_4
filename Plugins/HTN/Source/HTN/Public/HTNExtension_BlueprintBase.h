#pragma once
#include "CoreMinimal.h"
#include "HTNExtension.h"
#include "HTNExtension_BlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNExtension_BlueprintBase : public UHTNExtension {
    GENERATED_BODY()
public:
    UHTNExtension_BlueprintBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHTNStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCleanup();
    
};

