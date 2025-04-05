#include "RadiusAISenseConfig_Sight.h"
#include "RadiusAISense_Sight.h"

URadiusAISenseConfig_Sight::URadiusAISenseConfig_Sight() {
    this->Implementation = URadiusAISense_Sight::StaticClass();
    this->SightRadius = 3000.00f;
    this->LoseSightRadius = 3500.00f;
    this->PeripheralVisionAngleDegrees = 90.00f;
    this->AutoSuccessRangeFromLastSeenLocation = -1.00f;
    this->PointOfViewBackwardOffset = 0.00f;
    this->NearClippingRadius = 0.00f;
}


