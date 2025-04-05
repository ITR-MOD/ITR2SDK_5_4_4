#pragma once
#include "CoreMinimal.h"
#include "VoiceSettingsForOtherPlayer.h"
#include "VisitedGameSettings.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FVisitedGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVoiceSettingsForOtherPlayer> OtherPlayersVoiceChatSettings;
    
    FVisitedGameSettings();
};

