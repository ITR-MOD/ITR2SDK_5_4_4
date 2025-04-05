#include "RadiusAISense_Hearing.h"

URadiusAISense_Hearing::URadiusAISense_Hearing() {
    this->SpeedOfSoundSq = 0.00f;
}

void URadiusAISense_Hearing::ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag) {
}


