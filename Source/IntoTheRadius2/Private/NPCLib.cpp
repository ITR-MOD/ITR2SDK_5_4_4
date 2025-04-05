#include "NPCLib.h"

UNPCLib::UNPCLib() {
}

void UNPCLib::UpdateAmmoStaticData(FAmmoStaticData& Data, const float WithFleshDamage, const float WithArmorDamage, const float WithInitialVelocity) {
}

void UNPCLib::SetBlackboardValueAsRange(UBlackboardComponent* BlackboardComp, const FBlackboardKeySelector& Key, FFloatRange Value) {
}

void UNPCLib::ReportTeamEvent(AActor* InBroadcaster, AActor* InEnemy, const FVector& InLastKnowLocation, float EventRange, float PassedInfoAge, float InStrength, const FGameplayTag& Tag) {
}

void UNPCLib::ReinitNPC(const UWorld* World) {
}

void UNPCLib::RadiusReportNoiseEvent(const FVector& NoiseLocation, const float Loudness, AActor* Instigator, const FGameplayTag& Tag) {
}

FFloatRange UNPCLib::GetBlackboardValueAsRange(UBlackboardComponent* BlackboardComp, const FBlackboardKeySelector& Key) {
    return FFloatRange{};
}

FVector UNPCLib::GetAimLocation(const AAIController* AIController) {
    return FVector{};
}

FVector UNPCLib::GetActorFeetLocation(ACharacter* Character) {
    return FVector{};
}


