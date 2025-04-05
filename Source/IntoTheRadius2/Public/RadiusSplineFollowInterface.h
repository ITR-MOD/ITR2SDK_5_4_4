#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusSplineFollowInterface.generated.h"

class USplineComponent;

UINTERFACE(Blueprintable)
class URadiusSplineFollowInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusSplineFollowInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSplineToFollow(const USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMoveSpeed(const float Speed);
    
};

