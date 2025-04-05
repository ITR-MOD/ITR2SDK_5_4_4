#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnDeathDelegate.h"
#include "OnNearDeathDelegate.h"
#include "HealthComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class URadiusDifficultySettingsSubsystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UHealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearDeathThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNearDeath OnNearDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeath OnDeath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URadiusDifficultySettingsSubsystem* DifficultySettingsSubsystem;
    
public:
    UHealthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHealth(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void RestoreHealth();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAnyDamageTaken(AActor* Actor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
};

