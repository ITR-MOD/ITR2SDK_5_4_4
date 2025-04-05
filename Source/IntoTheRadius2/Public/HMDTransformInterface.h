#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "HMDTransformInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHMDTransformInterface : public UInterface {
    GENERATED_BODY()
};

class IHMDTransformInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetRightHandTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetLeftHandTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetHeadTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetBodyRootTransform() const;
    
};

