#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "RadiusLightComponent.generated.h"

class URadiusItemDynamicData;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusLightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URadiusLightComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLight(bool bOn);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLightState(const bool bIsOn);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetLightState(const bool bIsOn);
    
    UFUNCTION(BlueprintCallable)
    void OnItemTagChanged(const FGameplayTag Tag, const bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnItemDataUnlink(URadiusItemDynamicData* PreviousDynamicData);
    
    UFUNCTION(BlueprintCallable)
    void OnItemDataLink();
    
};

