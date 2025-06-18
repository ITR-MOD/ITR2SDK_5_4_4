#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "RadiusCheatManager.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    URadiusCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void TeleportPlayer(const float X, const float Y, const float Z, const float Yaw) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveGame(const int32 ProfileNr, const int32 SaveNr) const;

    UFUNCTION(BlueprintCallable, Exec)
    void PrintPlayerRotation() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintPlayerLocation() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void NoClip() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void MainMenu() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadGame(const int32 ProfileNr, const int32 SaveNr, const bool bSinglePlayer) const;

    UFUNCTION(BlueprintCallable, Exec)
    void DeleteSave(const int32 ProfileNr, const bool bSinglePlayer, const int32 SaveNr, const bool bAutosave) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoSave() const;
    
};

