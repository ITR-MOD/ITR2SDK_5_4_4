#pragma once
#include "CoreMinimal.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusCrashAnalyticsSubsystem.generated.h"

class USentrySettings;
class USentrySubsystem;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusCrashAnalyticsSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USentrySubsystem* SentrySubsystem;
    
public:
    URadiusCrashAnalyticsSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnSettingsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    static void HandleSettingsDelegate(USentrySettings* Settings);
    
};

