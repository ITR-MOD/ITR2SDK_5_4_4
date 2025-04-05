#include "NPCConfig.h"

UNPCConfig::UNPCConfig() {
    this->AISightStaticDataTable = NULL;
    this->AIStimuliStaticDataTable = NULL;
    this->MaxSenseDistance = 100000.00f;
    this->SoundProofMultiplierDefault = 1.00f;
    this->bIsHearingDebugEnabled = false;
    this->bIsHearingOcclusionEnabled = true;
    this->BothInDistortionZoneHearingDistModifier = 0.40f;
    this->OneInDistortionZoneHearingDistModifier = 0.00f;
    this->SuspiciousActivityLevel = 0.50f;
    this->DelayToStartReduceDetectionScale = 1.00f;
    this->ReduceScaleRate = 0.05f;
    this->bEnablePredictionPointDebug = false;
    this->FoliageCollisionChannel = ECC_WorldStatic;
    this->MaxFogDensity = 50.00f;
    this->MaxFogDistanceCutOff = 20000.00f;
    this->NotifyDistance = 10000.00f;
    this->TargetWeightModifier = 1.00f;
    this->FactorReductionDelay = 0.50f;
    this->FactorReductionPointsPerSecond = 10.00f;
    this->StimuliActivityWeight = 1.00f;
    this->TargetActivityWeight = 1.00f;
    this->WeightGapToChangeTarget = 0.10f;
    this->AimSocketName = TEXT("AimSocket");
    this->MaxNPCNumCanAttackAtTime = 0;
    this->NPCAudibleCheckFrequency = 5.00f;
    this->TraceTargetCubeSideHalfLength = 50.00f;
    this->AmbushChooseDist = 5000.00f;
    this->ShouldUseApproximateTargetLoc = false;
    this->NPCAudibleDist = 10000.00f;
    this->CommonVoiceCooldown = 1.00f;
    this->MaxAudioSlots = 3;
    this->AudioSlotCooldown = 3.00f;
    this->ActionSoundCooldown = 5.00f;
}


