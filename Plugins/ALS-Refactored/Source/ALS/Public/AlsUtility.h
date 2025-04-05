#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AlsUtility.generated.h"

class AActor;
class ACharacter;
class UObject;

UCLASS(Blueprintable)
class ALS_API UAlsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAlsUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDisplayDebugForActor(const AActor* Actor, const FName& DisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString NameToDisplayString(const FName& Name, bool bNameIsBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSimpleTagName(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetFirstPlayerPingSeconds(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetChildTags(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAnimationCurveValueFromCharacter(const ACharacter* Character, const FName& CurveName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DrawQuarterCircle(const UObject* WorldContext, const FVector& Location, const FVector& XAxis, const FVector& YAxis, float Radius, const FLinearColor& Color, float duration, float Thickness, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DrawHalfCircle(const UObject* WorldContext, const FVector& Location, const FVector& XAxis, const FVector& YAxis, float Radius, const FLinearColor& Color, float duration, float Thickness, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DrawDebugSweptSphere(const UObject* WorldContext, const FVector& Start, const FVector& End, float Radius, const FLinearColor& Color, float duration, float Thickness, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DrawDebugSweepSingleSphere(const UObject* WorldContext, const FVector& Start, const FVector& End, float Radius, bool bHit, const FHitResult& Hit, const FLinearColor& SweepColor, const FLinearColor& HitColor, float duration, float Thickness, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DrawDebugSweepSingleCapsuleAlternative(const UObject* WorldContext, const FVector& Start, const FVector& End, float Radius, float HalfHeight, bool bHit, const FHitResult& Hit, const FLinearColor& SweepColor, const FLinearColor& HitColor, float duration, float Thickness, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DrawDebugSweepSingleCapsule(const UObject* WorldContext, const FVector& Start, const FVector& End, const FRotator& Rotation, float Radius, float HalfHeight, bool bHit, const FHitResult& Hit, const FLinearColor& SweepColor, const FLinearColor& HitColor, float duration, float Thickness, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DrawDebugSphereAlternative(const UObject* WorldContext, const FVector& Location, const FRotator& Rotation, float Radius, const FLinearColor& Color, float duration, float Thickness, uint8 DepthPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DrawDebugLineTraceSingle(const UObject* WorldContext, const FVector& Start, const FVector& End, bool bHit, const FHitResult& Hit, const FLinearColor& TraceColor, const FLinearColor& HitColor, float duration, float Thickness, uint8 DepthPriority);
    
};

