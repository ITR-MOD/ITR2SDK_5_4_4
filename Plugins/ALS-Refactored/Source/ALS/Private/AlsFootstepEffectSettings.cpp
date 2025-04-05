#include "AlsFootstepEffectSettings.h"

FAlsFootstepEffectSettings::FAlsFootstepEffectSettings() {
    this->SoundSpawnMode = EAlsFootstepSoundSpawnMode::SpawnAtTraceHitLocation;
    this->DecalDuration = 0.00f;
    this->DecalFadeOutDuration = 0.00f;
    this->DecalSpawnMode = EAlsFootstepDecalSpawnMode::SpawnAtTraceHitLocation;
    this->ParticleSystemSpawnMode = EAlsFootstepParticleEffectSpawnMode::SpawnAtTraceHitLocation;
}

