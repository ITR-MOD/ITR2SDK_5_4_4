#include "RadiusTimeSubsystem.h"

URadiusTimeSubsystem::URadiusTimeSubsystem() {
}

bool URadiusTimeSubsystem::SetDateTime(const FDateTime NewDateTime) {
    return false;
}

bool URadiusTimeSubsystem::IsDay() const {
    return false;
}

void URadiusTimeSubsystem::GetTime(int32& Hour, int32& Minute) {
}

float URadiusTimeSubsystem::GetSecondsTillTide() const {
    return 0.0f;
}

int32 URadiusTimeSubsystem::GetSecondsTill(const float Hour) {
    return 0;
}

float URadiusTimeSubsystem::GetGameSecondsPassed() {
    return 0.0f;
}

float URadiusTimeSubsystem::GetGameHoursPassed() {
    return 0.0f;
}

void URadiusTimeSubsystem::GetDateTimeStrings(FString& Date, FString& DayOfWeek, FString& Hour, FString& Minute, FString& Second) {
}

FDateTime URadiusTimeSubsystem::GetDateTime() const {
    return FDateTime{};
}

float URadiusTimeSubsystem::GetCurrentHour() {
    return 0.0f;
}

void URadiusTimeSubsystem::DebugSetHour(const float Hour) {
}

void URadiusTimeSubsystem::AddTimeTill(float Hour) {
}

void URadiusTimeSubsystem::AddSeconds(const int32 Seconds) {
}

void URadiusTimeSubsystem::AddRealTime(const int32 RealSeconds) {
}

void URadiusTimeSubsystem::AddHours(const float Hours) {
}


