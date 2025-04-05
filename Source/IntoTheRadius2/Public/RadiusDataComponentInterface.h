#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AmmoContainerStaticData.h"
#include "AmmoStaticData.h"
#include "AttachmentStaticData.h"
#include "RadiusItemStaticData.h"
#include "WeaponStaticData.h"
#include "RadiusDataComponentInterface.generated.h"

class URadiusItemDynamicData;

UINTERFACE(Blueprintable)
class URadiusDataComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusDataComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetWeaponStaticData(FWeaponStaticData& OutWeaponStaticData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetItemStaticData(FRadiusItemStaticData& OutItemStaticData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetItemDynamicData_BP(URadiusItemDynamicData*& OutItemDynamicData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAttachmentStaticData(FAttachmentStaticData& OutAttachmentStaticData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAmmoStaticData(FAmmoStaticData& OutAmmoStaticData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAmmoContainerStaticData(FAmmoContainerStaticData& OutAmmoContainerStaticData);
    
};

