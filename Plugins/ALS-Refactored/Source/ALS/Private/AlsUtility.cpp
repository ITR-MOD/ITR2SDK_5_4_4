#include "AlsUtility.h"

UAlsUtility::UAlsUtility() {
}

bool UAlsUtility::ShouldDisplayDebugForActor(const AActor* Actor, const FName& DisplayName) {
    return false;
}

FString UAlsUtility::NameToDisplayString(const FName& Name, bool bNameIsBool) {
    return TEXT("");
}

FName UAlsUtility::GetSimpleTagName(const FGameplayTag& Tag) {
    return NAME_None;
}

float UAlsUtility::GetFirstPlayerPingSeconds(const UObject* WorldContext) {
    return 0.0f;
}

FGameplayTagContainer UAlsUtility::GetChildTags(const FGameplayTag& Tag) {
    return FGameplayTagContainer{};
}

float UAlsUtility::GetAnimationCurveValueFromCharacter(const ACharacter* Character, const FName& CurveName) {
    return 0.0f;
}

void UAlsUtility::DrawQuarterCircle(const UObject* WorldContext, const FVector& Location, const FVector& XAxis, const FVector& YAxis, float Radius, const FLinearColor& Color, float duration, float Thickness, uint8 DepthPriority) {
}

void UAlsUtility::DrawHalfCircle(const UObject* WorldContext, const FVector& Location, const FVector& XAxis, const FVector& YAxis, float Radius, const FLinearColor& Color, float duration, float Thickness, uint8 DepthPriority) {
}

void UAlsUtility::DrawDebugSweptSphere(const UObject* WorldContext, const FVector& Start, const FVector& End, float Radius, const FLinearColor& Color, float duration, float Thickness, uint8 DepthPriority) {
}

void UAlsUtility::DrawDebugSweepSingleSphere(const UObject* WorldContext, const FVector& Start, const FVector& End, float Radius, bool bHit, const FHitResult& Hit, const FLinearColor& SweepColor, const FLinearColor& HitColor, float duration, float Thickness, uint8 DepthPriority) {
}

void UAlsUtility::DrawDebugSweepSingleCapsuleAlternative(const UObject* WorldContext, const FVector& Start, const FVector& End, float Radius, float HalfHeight, bool bHit, const FHitResult& Hit, const FLinearColor& SweepColor, const FLinearColor& HitColor, float duration, float Thickness, uint8 DepthPriority) {
}

void UAlsUtility::DrawDebugSweepSingleCapsule(const UObject* WorldContext, const FVector& Start, const FVector& End, const FRotator& Rotation, float Radius, float HalfHeight, bool bHit, const FHitResult& Hit, const FLinearColor& SweepColor, const FLinearColor& HitColor, float duration, float Thickness, uint8 DepthPriority) {
}

void UAlsUtility::DrawDebugSphereAlternative(const UObject* WorldContext, const FVector& Location, const FRotator& Rotation, float Radius, const FLinearColor& Color, float duration, float Thickness, uint8 DepthPriority) {
}

void UAlsUtility::DrawDebugLineTraceSingle(const UObject* WorldContext, const FVector& Start, const FVector& End, bool bHit, const FHitResult& Hit, const FLinearColor& TraceColor, const FLinearColor& HitColor, float duration, float Thickness, uint8 DepthPriority) {
}


