#include "AlsMath.h"

UAlsMath::UAlsMath() {
}

FVector UAlsMath::SpringDampVector(const FVector& Current, const FVector& Target, FAlsSpringVectorState& SpringState, float DeltaTime, float Frequency, float DampingRatio, float TargetVelocityAmount) {
    return FVector{};
}

float UAlsMath::SpringDampFloat(float Current, float Target, FAlsSpringFloatState& SpringState, float DeltaTime, float Frequency, float DampingRatio, float TargetVelocityAmount) {
    return 0.0f;
}

FVector UAlsMath::SlerpSkipNormalization(const FVector& From, const FVector& To, float Alpha) {
    return FVector{};
}

FVector UAlsMath::RadianToDirectionXY(float Radian) {
    return FVector{};
}

FVector2D UAlsMath::RadianToDirection(float Radian) {
    return FVector2D{};
}

FVector UAlsMath::PerpendicularCounterClockwiseXY(const FVector& Vector) {
    return FVector{};
}

FVector UAlsMath::PerpendicularClockwiseXY(const FVector& Vector) {
    return FVector{};
}

FRotator UAlsMath::LerpRotator(const FRotator& From, const FRotator& To, float Alpha) {
    return FRotator{};
}

float UAlsMath::LerpClamped(float From, float To, float Alpha) {
    return 0.0f;
}

float UAlsMath::LerpAngle(float From, float To, float Alpha) {
    return 0.0f;
}

float UAlsMath::InterpolateAngleConstant(float Current, float Target, float DeltaTime, float InterpolationSpeed) {
    return 0.0f;
}

FRotator UAlsMath::ExponentialDecayRotator(const FRotator& Current, const FRotator& Target, float DeltaTime, float Lambda) {
    return FRotator{};
}

float UAlsMath::ExponentialDecayAngle(float Current, float Target, float DeltaTime, float Lambda) {
    return 0.0f;
}

float UAlsMath::ExponentialDecay(float DeltaTime, float Lambda) {
    return 0.0f;
}

double UAlsMath::DirectionToAngleXY(const FVector& Direction) {
    return 0.0;
}

double UAlsMath::DirectionToAngle(const FVector2D& Direction) {
    return 0.0;
}

FRotator UAlsMath::DampRotator(const FRotator& Current, const FRotator& Target, float DeltaTime, float Smoothing) {
    return FRotator{};
}

float UAlsMath::DampAngle(float Current, float Target, float DeltaTime, float Smoothing) {
    return 0.0f;
}

float UAlsMath::Damp(float DeltaTime, float Smoothing) {
    return 0.0f;
}

FVector2D UAlsMath::ClampMagnitude012D(const FVector2D& Vector) {
    return FVector2D{};
}

FVector UAlsMath::ClampMagnitude01(const FVector& Vector) {
    return FVector{};
}

float UAlsMath::Clamp01(float Value) {
    return 0.0f;
}

EAlsMovementDirection UAlsMath::CalculateMovementDirection(float Angle, float ForwardHalfAngle, float AngleThreshold) {
    return EAlsMovementDirection::Forward;
}

FVector UAlsMath::AngleToDirectionXY(float Angle) {
    return FVector{};
}

FVector2D UAlsMath::AngleToDirection(float Angle) {
    return FVector2D{};
}

double UAlsMath::AngleBetweenSkipNormalization(const FVector& From, const FVector& To) {
    return 0.0;
}


