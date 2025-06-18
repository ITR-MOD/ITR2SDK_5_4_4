#include "FLSystem.h"

UFLSystem::UFLSystem() {
}

void UFLSystem::SetQuestDisplayFrequency(float Frequency) {
}

bool UFLSystem::IsSimulate() {
    return false;
}

bool UFLSystem::IsShippingBuild() {
    return false;
}

bool UFLSystem::IsReleaseBuild() {
    return false;
}

bool UFLSystem::IsQABuild() {
    return false;
}

bool UFLSystem::IsMobilePlatform() {
    return false;
}

bool UFLSystem::IsGameRunning(UObject* WorldContextObject) {
    return false;
}

bool UFLSystem::IsEditor() {
    return false;
}

bool UFLSystem::IsDevelopmentBuild() {
    return false;
}

bool UFLSystem::IsCheatsEnabled() {
    return false;
}

bool UFLSystem::IsBuild() {
    return false;
}

FString UFLSystem::GetProjectVersion() {
    return TEXT("");
}

FString UFLSystem::GetProjectRevision() {
    return TEXT("");
}

FString UFLSystem::GetProjectBeta() {
    return TEXT("");
}

ERadiusPlatformType UFLSystem::GetPlatform() {
    return ERadiusPlatformType::Unknown;
}

FString UFLSystem::GetInstallID() {
    return TEXT("");
}

FString UFLSystem::GetGPUBrand() {
    return TEXT("");
}

FString UFLSystem::GetGameVersionString() {
    return TEXT("");
}

FString UFLSystem::GetFullVersionString() {
    return TEXT("");
}

FString UFLSystem::GetCurrentSpeakersName(UObject* WorldContextObject) {
    return TEXT("");
}

FString UFLSystem::GetCurrentMicrophoneName() {
    return TEXT("");
}

FString UFLSystem::GetCPUVendor() {
    return TEXT("");
}

FString UFLSystem::GetCPUBrand() {
    return TEXT("");
}

FString UFLSystem::GetCoopVersionString() {
    return TEXT("");
}


