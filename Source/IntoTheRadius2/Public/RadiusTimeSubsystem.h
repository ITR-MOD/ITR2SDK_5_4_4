#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RadiusWorldSubsystem.h"
#include "RadiusTimeSubsystem.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusTimeSubsystem : public URadiusWorldSubsystem {
    GENERATED_BODY()
public:
    URadiusTimeSubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetDateTime(const FDateTime NewDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDay() const;
    
    UFUNCTION(BlueprintCallable)
    void GetTime(int32& Hour, int32& Minute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondsTillTide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSecondsTill(const float Hour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameSecondsPassed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameHoursPassed();
    
    UFUNCTION(BlueprintCallable)
    void GetDateTimeStrings(FString& Date, FString& DayOfWeek, FString& Hour, FString& Minute, FString& Second);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetDateTime() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentHour();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetHour(const float Hour);
    
    UFUNCTION(BlueprintCallable)
    void AddTimeTill(float Hour);
    
    UFUNCTION(BlueprintCallable)
    void AddSeconds(const int32 Seconds);
    
    UFUNCTION(BlueprintCallable)
    void AddRealTime(const int32 RealSeconds);
    
    UFUNCTION(BlueprintCallable)
    void AddHours(const float Hours);
    
};

