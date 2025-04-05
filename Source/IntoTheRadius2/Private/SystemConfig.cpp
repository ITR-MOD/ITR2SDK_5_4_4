#include "SystemConfig.h"

USystemConfig::USystemConfig() {
    this->MicThreshold = 0.01f;
    this->SilenceDetectionThreshold = 0.01f;
    this->DefaultAttenuation = NULL;
    this->DefaultVoiceEffect = NULL;
    this->RadioAttenuation = NULL;
    this->RadioVoiceEffect = NULL;
    this->RadioStartSound = NULL;
    this->RadioEndSound = NULL;
    this->RadioErrorSound = NULL;
    this->RadioWhiteNoise = NULL;
    this->RevisionToTeleportPlayer = 0;
    this->RevisionToClearDenyItemUseTags = 0;
    this->RevisionToResetItemsDurability = 29000;
    this->RevisionWhereStackedItemsIntroduced = 28524;
    this->RevisionForWipe = 0;
}


