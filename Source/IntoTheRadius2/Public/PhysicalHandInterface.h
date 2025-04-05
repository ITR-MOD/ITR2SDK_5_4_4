#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "PhysicalHandInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPhysicalHandInterface : public UInterface {
    GENERATED_BODY()
};

class IPhysicalHandInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsRight(bool bIsRight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsPointingUI(const bool bIsPointing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHandState(FGameplayTag HandState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAlphaValues(double GripAlpha, double TriggerAlpha, bool TriggerTouch);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetHandValues(bool& bIsRight, FGameplayTag& HandState, double& GripAlpha, double& TriggerAlpha, bool& TriggerTouch, bool& IsPointingUi);
    
};

