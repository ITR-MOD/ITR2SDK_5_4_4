#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusCheatSubsystem.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API URadiusCheatSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URadiusCheatSubsystem();

    UFUNCTION(BlueprintCallable)
    void TravelTo(FGameplayTag LevelTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleControllerVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SwitchNoClip();
    
    UFUNCTION(BlueprintCallable)
    void SpawnStartingGear();
    
    UFUNCTION(BlueprintCallable)
    void SpawnMissionArtefacts();
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void SetTideTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetStartingGear(const FString& ConfigName) const;
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedCheatValue(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedCheat(const bool bTurnOn);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPlayerName(const bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetShowControllers(const bool bNewShowControllers);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNoClip(const bool bTurnOn);
    
    UFUNCTION(BlueprintCallable)
    void SetMagReloadCheat(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpAllowed(const bool bTurnOn);
    
    UFUNCTION(BlueprintCallable)
    void SetInvisibleMode(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetInfiniteAmmoCheat(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetImmortalMode(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetGodMode(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAIDebug(const bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAccessLevel(const int32 AccessLevel) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SpawnItemByTypeTag(const FGameplayTag TypeTag, const FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SpawnActorByClass(UClass* InClass, const FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void RegenerateLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeedCheat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMagReloadCheat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvisibleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfiniteAmmoCheat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsImmortalMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGodMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStartingGearConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedCheatValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowControllers() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetOwner() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNoClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAIDebug() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllItemsAndData();
    
    UFUNCTION(BlueprintCallable)
    void CrashGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddMoney(const int32 DeltaMoney) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddAccessPoints(const int32 AccessPoints) const;
    
};

