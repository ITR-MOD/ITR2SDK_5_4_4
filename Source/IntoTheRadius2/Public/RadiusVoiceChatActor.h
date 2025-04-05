#pragma once
#include "CoreMinimal.h"
#include "PlayerVoiceChatActor.h"
#include "RadiusVoiceChatActor.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusVoiceChatActor : public APlayerVoiceChatActor {
    GENERATED_BODY()
public:
    ARadiusVoiceChatActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryStartVoiceChat();
    
    UFUNCTION(BlueprintCallable)
    void StopVoiceChat();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(AActor* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
};

