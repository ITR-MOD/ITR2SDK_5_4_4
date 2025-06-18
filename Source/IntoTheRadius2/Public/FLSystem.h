#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERadiusPlatformType.h"
#include "FLSystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLSystem : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLSystem();

    UFUNCTION(BlueprintCallable)
    static void SetQuestDisplayFrequency(float Frequency);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSimulate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReleaseBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsQABuild();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMobilePlatform();


    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContextObject"))
    static bool IsGameRunning(UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDevelopmentBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCheatsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectRevision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectBeta();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERadiusPlatformType GetPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetInstallID();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGPUBrand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameVersionString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFullVersionString();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetCurrentSpeakersName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentMicrophoneName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCPUVendor();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCPUBrand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCoopVersionString();
    
};

