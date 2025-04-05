#pragma once
#include "CoreMinimal.h"
#include "VoiceSettingsForOtherPlayer.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FVoiceSettingsForOtherPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVoiceMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceBoostLevel;
    
    FVoiceSettingsForOtherPlayer();
};

