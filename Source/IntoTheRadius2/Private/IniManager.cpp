#include "IniManager.h"

UIniManager::UIniManager() {
}

void UIniManager::StoreInUserSave(const FString& Filename) {
}

bool UIniManager::SetVector(const FString& Filename, const FString& Section, const FString& Key, const FVector& Value) {
    return false;
}

bool UIniManager::SetString(const FString& Filename, const FString& Section, const FString& Key, const FString& Value) {
    return false;
}

bool UIniManager::SetInt(const FString& Filename, const FString& Section, const FString& Key, const int32 Value) {
    return false;
}

bool UIniManager::SetFloat(const FString& Filename, const FString& Section, const FString& Key, const float Value) {
    return false;
}

bool UIniManager::SetBool(const FString& Filename, const FString& Section, const FString& Key, const bool bValue) {
    return false;
}

FVector UIniManager::GetVector(const FString& Filename, const FString& Section, const FString& Key, const FVector& DefaultValue) {
    return FVector{};
}

FString UIniManager::GetString(const FString& Filename, const FString& Section, const FString& Key, const FString& DefaultValue, const bool SetIfMissing) {
    return TEXT("");
}

int32 UIniManager::GetInt(const FString& Filename, const FString& Section, const FString& Key, const int32 DefaultValue, const bool SetIfMissing) {
    return 0;
}

float UIniManager::GetFloat(const FString& Filename, const FString& Section, const FString& Key, const float DefaultValue, const bool SetIfMissing) {
    return 0.0f;
}

bool UIniManager::GetBool(const FString& Filename, const FString& Section, const FString& Key, const bool DefaultValue, const bool SetIfMissing) {
    return false;
}

bool UIniManager::Exists(const FString& Filename, const FString& Section, const FString& Key) {
    return false;
}


