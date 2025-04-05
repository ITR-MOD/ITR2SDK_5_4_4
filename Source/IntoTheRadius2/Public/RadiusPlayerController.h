#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "VRPlayerController.h"
#include "EMoneyChangeReason.h"
#include "OnPlayerStateReplicatedDelegate.h"
#include "RadiusDamageDealerInterface.h"
#include "RadiusPlayerControllerInterface.h"
#include "Templates/SubclassOf.h"
#include "RadiusPlayerController.generated.h"

class AActor;
class AController;
class APawn;
class ARadiusPlayerCharacterGameplay;
class UDamageType;
class URadiusCheatComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusPlayerController : public AVRPlayerController, public IRadiusPlayerControllerInterface, public IGenericTeamAgentInterface, public IRadiusDamageDealerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateReplicated OnPlayerStateReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusCheatComponent* CheatComponent;
    
    ARadiusPlayerController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_TravelTo(const FGameplayTag LevelTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NotifyClientCharacterInitialized(ARadiusPlayerCharacterGameplay* PlayerCharacter, const bool bIsLeftHanded);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeMoney(int32 DeltaMoney, const FString& AnalyticsString, EMoneyChangeReason MoneyChangeReason);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_ApplyPointDamage(AActor* Target, const float Damage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_ApplyDamage(AActor* DamagedActor, const float Damage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostPossess(APawn* P);
    

    // Fix for true pure virtual functions not being implemented
};

