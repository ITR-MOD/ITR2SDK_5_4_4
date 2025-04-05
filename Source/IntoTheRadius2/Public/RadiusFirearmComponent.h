#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EWeaponDysfunction.h"
#include "FirearmAmmoStateRep.h"
#include "FirearmComponentShotExtendedRep.h"
#include "FirearmComponentShotRep.h"
#include "FirearmEjectedAmmo.h"
#include "FirearmStateRep.h"
#include "MinMaxVector.h"
#include "NoParamsDelegateDelegate.h"
#include "OnBulletFiredDelegate.h"
#include "OnDysfunctionDelegate.h"
#include "OnFireModeChangedDelegate.h"
#include "OnMuzzleChangedDelegate.h"
#include "OnSliderLockChangedDelegate.h"
#include "RadiusComponentInterface.h"
#include "RadiusFirearmComponentInterface.h"
#include "RadiusWeaponComponentInterface.h"
#include "RadiusFirearmComponent.generated.h"

class AActor;
class UActorComponent;
class UCurveFloat;
class UPrimitiveComponent;
class URadiusItemDynamicData;
class USoundBase;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusFirearmComponent : public UBoxComponent, public IRadiusComponentInterface, public IRadiusWeaponComponentInterface, public IRadiusFirearmComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ChamberAmmoSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLoadToChamber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxVector EjectForceMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawEjectionDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaveUnshotAmmoInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShootCacheForABP;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFireModeChanged OnFireModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSliderLockChanged OnSliderLock;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnAmmoInserted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDysfunction OnDysfunction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBulletFired OnBulletFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMuzzleChanged OnMuzzleChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* RelevantMuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* RelevantMagazine;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* DurabilityToDysfunctionChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UStaticMesh*> ShellMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FFirearmStateRep ReplicatedFirearmState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AmmoState, meta=(AllowPrivateAccess=true))
    FFirearmAmmoStateRep ReplicatedFirearmAmmoState;
    
public:
    URadiusFirearmComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    bool TryReload(const bool bIsManual);
    
    UFUNCTION(BlueprintCallable)
    bool TryNextAutomaticFire();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleChamberLoading(bool bOn);
    
protected:
    UFUNCTION(BlueprintCallable)
    FGameplayTag SwitchNextFireMode();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartFire();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetWeaponCocked(const bool bCocked);
    
    UFUNCTION(BlueprintCallable)
    bool SetSliderLock(const bool bSet, const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFireMode(const FGameplayTag NewFireModeTag);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateWithAmmo(const FFirearmStateRep& Rep, const FFirearmAmmoStateRep& AmmoRep);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdate(const FFirearmStateRep& Rep);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerShotFailed(const FFirearmStateRep& Rep);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerShootProjectile(const FFirearmComponentShotExtendedRep& Rep);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEjectChamber(const TArray<FFirearmEjectedAmmo>& InEjectedAmmo, const FFirearmStateRep& Rep, const FFirearmAmmoStateRep& AmmoRep);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAmmoInserted(AActor* OtherActor, const FFirearmAmmoStateRep& Rep);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PreInitializeSound(USoundBase* InSoundBase);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmmoState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemStackChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnDynamicDataUnlinked(URadiusItemDynamicData* PreviousDynamicData);
    
    UFUNCTION(BlueprintCallable)
    void OnDynamicDataLinked();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastShotFailed(const FFirearmStateRep& Rep);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastShootProjectile(const FFirearmComponentShotRep& Rep);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastEjectChamber(const TArray<FGameplayTag>& EjectedShells);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastAmmoInserted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponCocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSliderLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutOfAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnSafety() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAcceptsAmmoType(const FGameplayTag AmmoType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMagazine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDysfunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasAmmoInBarrel(bool& bIsShell);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetUnejectedBulletComponent(bool bOnlyNotShell);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentFireModeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponDysfunction GetCurrentDysfunctionEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentDysfunction() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EndFire();
    
protected:
    UFUNCTION(BlueprintCallable)
    FGameplayTag EjectChamber(bool bIsManual);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DeliverAmmoFromMagToChamber();
    
    UFUNCTION(BlueprintCallable)
    void ClearDysfunction(FGameplayTag DysfunctionToClear);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanShoot();
    

    // Fix for true pure virtual functions not being implemented
};

