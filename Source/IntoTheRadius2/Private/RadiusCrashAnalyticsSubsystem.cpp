#include "RadiusCrashAnalyticsSubsystem.h"

URadiusCrashAnalyticsSubsystem::URadiusCrashAnalyticsSubsystem() {
    this->SentrySubsystem = NULL;
}

void URadiusCrashAnalyticsSubsystem::OnSettingsChanged() {
}

void URadiusCrashAnalyticsSubsystem::OnLevelLoaded() {
}

void URadiusCrashAnalyticsSubsystem::HandleSettingsDelegate(USentrySettings* Settings) {
}


