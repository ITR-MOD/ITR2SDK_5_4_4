#pragma once
#include "CoreMinimal.h"
#include "Cover.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHTNReturnValueValidity.h"
#include "HTNLocationSource.h"
#include "HTNNodeLibrary.generated.h"

class AActor;
class UHTNNode;
class UObject;
class UWorldStateProxy;

UCLASS(Blueprintable)
class HTN_API UHTNNodeLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHTNNodeLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsVector(UHTNNode* Node, const FBlackboardKeySelector& Key, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsString(UHTNNode* Node, const FBlackboardKeySelector& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsRotator(UHTNNode* Node, const FBlackboardKeySelector& Key, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsObject(UHTNNode* Node, const FBlackboardKeySelector& Key, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsName(UHTNNode* Node, const FBlackboardKeySelector& Key, FName Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsInt(UHTNNode* Node, const FBlackboardKeySelector& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsFloat(UHTNNode* Node, const FBlackboardKeySelector& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsEnum(UHTNNode* Node, const FBlackboardKeySelector& Key, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsCover(UHTNNode* Node, const FBlackboardKeySelector& Key, FCover Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsClass(UHTNNode* Node, const FBlackboardKeySelector& Key, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateValueAsBool(UHTNNode* Node, const FBlackboardKeySelector& Key, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldStateSelfLocation(UHTNNode* Node, const FVector& NewSelfLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetWorldStateValueAsVector(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWorldStateValueAsString(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetWorldStateValueAsRotator(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetWorldStateValueAsObject(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetWorldStateValueAsName(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWorldStateValueAsInt(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWorldStateValueAsFloat(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetWorldStateValueAsEnum(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCover GetWorldStateValueAsCover(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetWorldStateValueAsClass(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetWorldStateValueAsBool(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetWorldStateValueAsActor(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetSingleLocationFromHTNLocationSource(EHTNReturnValueValidity& OutResult, const UHTNNode* Node, const FHTNLocationSource& LocationSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetSelfLocationFromWorldState(UHTNNode* Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorldStateProxy* GetOwnersWorldState(const UHTNNode* Node);
    
    UFUNCTION(BlueprintCallable)
    static void GetMultipleLocationsFromHTNLocationSource(EHTNReturnValueValidity& OutResult, TArray<FVector>& OutLocations, const UHTNNode* Node, const FHTNLocationSource& LocationSource);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLocationFromWorldState(UHTNNode* Node, const FBlackboardKeySelector& KeySelector, FVector& OutLocation, AActor*& OutActor);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyWorldStateValue(UHTNNode* Node, const FBlackboardKeySelector& SourceKey, const FBlackboardKeySelector& TargetKey);
    
    UFUNCTION(BlueprintCallable)
    static void ClearWorldStateValue(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
};

