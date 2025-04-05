#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemContainerInterface.h"
#include "RadiusDamageCauserInterface.h"
#include "RadiusPlayerCharacter.h"
#include "RadiusPlayerCharacterGameplay.generated.h"

class APawn;
class ARadiusPlayerStateGameplay;
class UPlayerGripConstraintComponent;
class UPlayerStatsComponent;
class URadiusPhysicalHand;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API ARadiusPlayerCharacterGameplay : public ARadiusPlayerCharacter, public IItemContainerInterface, public IRadiusDamageCauserInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URadiusPhysicalHand* PhysicsHandLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerGripConstraintComponent* PhysicsGripLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USphereComponent* GrabSphereLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URadiusPhysicalHand* PhysicsHandRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerGripConstraintComponent* PhysicsGripRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USphereComponent* GrabSphereRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerStatsComponent* PlayerStats;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARadiusPlayerStateGameplay> RadiusPlayerStateGameplay;
    
public:
    ARadiusPlayerCharacterGameplay(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBodyCalibration() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPossessed(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerHeightOffsetChanged(float PlayerHeightOffset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARadiusPlayerStateGameplay* GetRadiusPlayerStateGameplay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FGameplayTag> GetAllAutoReturnHolsters() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Delayed_InitializeContainer_Internal();
    

    // Fix for true pure virtual functions not being implemented
};

