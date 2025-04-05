#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GameplayTagContainer.h"
#include "RadiusGameModeInterface.h"
#include "Templates/SubclassOf.h"
#include "RadiusGameMode.generated.h"

class AController;
class APawn;

UCLASS(Blueprintable, NonTransient)
class INTOTHERADIUS2_API ARadiusGameMode : public AGameMode, public IRadiusGameModeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> DefaultNoHMDPawnClass;
    
    ARadiusGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_RespawnPlayer(AController* Controller);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartLoadLevel(FGameplayTag LevelTag);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishLoadLevel();
    

    // Fix for true pure virtual functions not being implemented
};

