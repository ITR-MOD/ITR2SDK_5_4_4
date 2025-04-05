#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OpenXRExpansionFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "RadiusGameInstanceInterface.generated.h"

class AActor;
class AGripSelectorsController;
class ARadiusGrippableActorBase;
class ULevelLoadedEventTrigger;

UINTERFACE(Blueprintable)
class URadiusGameInstanceInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusGameInstanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSplashScreen(const bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSplashScreenShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLoadLevelFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMotionControllersType(FString& TrackingSystemName, EBPOpenXRControllerDeviceType& MotionControllersType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULevelLoadedEventTrigger* GetLevelLoadedEventTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<AActor> GetIngameMenuClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<AGripSelectorsController> GetGripSelectorsControllerClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ARadiusGrippableActorBase> GetClimbableActorBaseClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitGame();
    
};

