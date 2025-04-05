#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WorldStateProxy.generated.h"

class AActor;
class UHTNComponent;

UCLASS(Blueprintable, DefaultToInstanced)
class HTN_API UWorldStateProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditable;
    
public:
    UWorldStateProxy();

    UFUNCTION(BlueprintCallable)
    void SetValueAsVector(const FName& KeyName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsString(const FName& KeyName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsRotator(const FName& KeyName, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsObject(const FName& KeyName, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsName(const FName& KeyName, FName Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsInt(const FName& KeyName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsFloat(const FName& KeyName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsEnum(const FName& KeyName, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsClass(const FName& KeyName, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsBool(const FName& KeyName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfLocation(const FVector& NewSelfLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVectorValueSet(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetValueAsVector(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetValueAsString(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetValueAsRotator(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetValueAsObject(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetValueAsName(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValueAsInt(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueAsFloat(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetValueAsEnum(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetValueAsClass(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueAsBool(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetValueAsActor(const FName& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSelfLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRotationFromEntry(const FName& KeyName, FRotator& ResultRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTNComponent* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocationFromEntry(const FName& KeyName, FVector& ResultLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocation(const FBlackboardKeySelector& KeySelector, FVector& OutLocation, AActor*& OutActor) const;
    
    UFUNCTION(BlueprintCallable)
    bool CopyKeyValue(const FName& SourceKeyName, const FName& TargetKeyName);
    
    UFUNCTION(BlueprintCallable)
    void ClearValue(const FName& KeyName);
    
};

