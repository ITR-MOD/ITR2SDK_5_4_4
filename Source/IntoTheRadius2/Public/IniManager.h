#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "IniManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class INTOTHERADIUS2_API UIniManager : public UObject {
    GENERATED_BODY()
public:
    UIniManager();

    UFUNCTION(BlueprintCallable)
    void StoreInUserSave(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    bool SetVector(const FString& Filename, const FString& Section, const FString& Key, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetString(const FString& Filename, const FString& Section, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetInt(const FString& Filename, const FString& Section, const FString& Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloat(const FString& Filename, const FString& Section, const FString& Key, const float Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetBool(const FString& Filename, const FString& Section, const FString& Key, const bool bValue);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVector(const FString& Filename, const FString& Section, const FString& Key, const FVector& DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    FString GetString(const FString& Filename, const FString& Section, const FString& Key, const FString& DefaultValue, const bool SetIfMissing);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInt(const FString& Filename, const FString& Section, const FString& Key, const int32 DefaultValue, const bool SetIfMissing);
    
    UFUNCTION(BlueprintCallable)
    float GetFloat(const FString& Filename, const FString& Section, const FString& Key, const float DefaultValue, const bool SetIfMissing);
    
    UFUNCTION(BlueprintCallable)
    bool GetBool(const FString& Filename, const FString& Section, const FString& Key, const bool DefaultValue, const bool SetIfMissing);
    
    UFUNCTION(BlueprintCallable)
    bool Exists(const FString& Filename, const FString& Section, const FString& Key);
    
};

