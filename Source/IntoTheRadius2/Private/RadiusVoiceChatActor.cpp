#include "RadiusVoiceChatActor.h"

ARadiusVoiceChatActor::ARadiusVoiceChatActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ARadiusVoiceChatActor::TryStartVoiceChat() {
    return false;
}

void ARadiusVoiceChatActor::StopVoiceChat() {
}

void ARadiusVoiceChatActor::OnPlayerDied(AActor* PlayerPawn) {
}

void ARadiusVoiceChatActor::OnPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}


