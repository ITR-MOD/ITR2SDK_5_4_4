#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AlsSpringFloatState.h"
#include "AlsSpringVectorState.h"
#include "EAlsMovementDirection.h"
#include "AlsMath.generated.h"

UCLASS(Blueprintable)
class ALS_API UAlsMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAlsMath();

    UFUNCTION(BlueprintCallable)
    static FVector SpringDampVector(const FVector& Current, const FVector& Target, UPARAM(Ref) FAlsSpringVectorState& SpringState, float DeltaTime, float Frequency, float DampingRatio, float TargetVelocityAmount);
    
    UFUNCTION(BlueprintCallable)
    static float SpringDampFloat(float Current, float Target, UPARAM(Ref) FAlsSpringFloatState& SpringState, float DeltaTime, float Frequency, float DampingRatio, float TargetVelocityAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SlerpSkipNormalization(const FVector& From, const FVector& To, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RadianToDirectionXY(float Radian);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D RadianToDirection(float Radian);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector PerpendicularCounterClockwiseXY(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector PerpendicularClockwiseXY(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator LerpRotator(const FRotator& From, const FRotator& To, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LerpClamped(float From, float To, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LerpAngle(float From, float To, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float InterpolateAngleConstant(float Current, float Target, float DeltaTime, float InterpolationSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator ExponentialDecayRotator(const FRotator& Current, const FRotator& Target, float DeltaTime, float Lambda);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ExponentialDecayAngle(float Current, float Target, float DeltaTime, float Lambda);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ExponentialDecay(float DeltaTime, float Lambda);
    
    UFUNCTION(BlueprintPure)
    static double DirectionToAngleXY(const FVector& Direction);
    
    UFUNCTION(BlueprintPure)
    static double DirectionToAngle(const FVector2D& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator DampRotator(const FRotator& Current, const FRotator& Target, float DeltaTime, float Smoothing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DampAngle(float Current, float Target, float DeltaTime, float Smoothing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Damp(float DeltaTime, float Smoothing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ClampMagnitude012D(const FVector2D& Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClampMagnitude01(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Clamp01(float Value);
    
    UFUNCTION(BlueprintCallable)
    static EAlsMovementDirection CalculateMovementDirection(float Angle, float ForwardHalfAngle, float AngleThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector AngleToDirectionXY(float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D AngleToDirection(float Angle);
    
    UFUNCTION(BlueprintPure)
    static double AngleBetweenSkipNormalization(const FVector& From, const FVector& To);
    
};

