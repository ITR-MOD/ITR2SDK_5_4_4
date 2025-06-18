#include "RadiusAISense_Hearing.h"

URadiusAISense_Hearing::URadiusAISense_Hearing() {
    this->SpeedOfSoundSq = 0.00f;
}

void URadiusAISense_Hearing::ReportNoiseEvent(UObject* WorldContextObject, const FVector NoiseLocation, const float Loudness, AActor* Instigator, const float MaxRange, const FName Tag) {
}


