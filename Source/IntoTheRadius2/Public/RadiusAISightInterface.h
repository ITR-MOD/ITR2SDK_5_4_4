#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "AISightDebug.h"
#include "RadiusAISightInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusAISightInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusAISightInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSpotDistModifier(const float CrouchedTargetDistModifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSocketLocation(const FName SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSightDebug(FAISightDebug& OutSightDebug) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSecondHeadLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetRightHandLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLeftHandLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHeadLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetFirstHeadLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetActorLocation() const;
    
};

