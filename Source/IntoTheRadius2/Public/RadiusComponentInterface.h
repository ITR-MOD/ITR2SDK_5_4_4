#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RadiusComponentInterface.generated.h"

class UActorComponent;
class UObject;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetComponentTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetComponentAsObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetAsRadiusSceneComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UActorComponent* GetAsRadiusComponent() const;
    
};

