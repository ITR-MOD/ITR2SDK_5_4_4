#pragma once
#include "CoreMinimal.h"
#include "AdvancedFriendsGameInstance.h"
#include "RadiusGameInstanceInterface.h"
#include "RadiusSplashDesc.h"
#include "Templates/SubclassOf.h"
#include "RadiusGameInstance.generated.h"

class AActor;
class AGripSelectorsController;
class ARadiusGrippableActorBase;
class ULevelLoadedEventTrigger;

UCLASS(Blueprintable, NonTransient)
class INTOTHERADIUS2_API URadiusGameInstance : public UAdvancedFriendsGameInstance, public IRadiusGameInstanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusSplashDesc> SplashDescriptions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FRadiusSplashDesc ShadersCompileSplashDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSaveLoadTemporarilyDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelLoadedEventTrigger* LevelLoadedEventTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> IngameMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARadiusGrippableActorBase> ClimbableActorBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGripSelectorsController> GripSelectorsControllerClass;
    
public:
    URadiusGameInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStart();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishLoadLevel();
    

    // Fix for true pure virtual functions not being implemented
};

