#include "AlsAnimNotify_FootstepEffects.h"

UAlsAnimNotify_FootstepEffects::UAlsAnimNotify_FootstepEffects() {
    this->FootstepEffectsSettings = NULL;
    this->FootBone = EAlsFootBone::Left;
    this->bSkipEffectsWhenInAir = false;
    this->bSpawnSound = true;
    this->SoundVolumeMultiplier = 1.00f;
    this->SoundPitchMultiplier = 1.00f;
    this->SoundType = EAlsFootstepSoundType::Step;
    this->bIgnoreFootstepSoundBlockCurve = false;
    this->bSpawnDecal = false;
    this->bSpawnParticleSystem = false;
}


