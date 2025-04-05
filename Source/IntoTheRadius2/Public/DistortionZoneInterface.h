#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OnDistortionZoneChangedDelegate.h"
#include "DistortionZoneInterface.generated.h"

class ADistortionZoneBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UDistortionZoneInterface : public UInterface {
    GENERATED_BODY()
};

class IDistortionZoneInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInsideDistortionZone(bool bIsInside, const ADistortionZoneBase* InDistortionZone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInsideDistortionZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ADistortionZoneBase* GetDistortionZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindOnDistortionZoneChanged(const FOnDistortionZoneChanged& Event);
    
};

