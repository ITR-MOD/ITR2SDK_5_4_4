#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Components/SlateWrapperTypes.h"
#include "RadiusItemInfoWidgetInterface.generated.h"

class URadiusDataComponent;
class UWidgetComponent;

UINTERFACE(Blueprintable)
class URadiusItemInfoWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusItemInfoWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupUIFromItemData(URadiusDataComponent* DataAccessor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetWidgetComponent(UWidgetComponent*& ItemInfoWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Disable();
    
};

