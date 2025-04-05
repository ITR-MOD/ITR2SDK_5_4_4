#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusTimeController.generated.h"

class ALevelSequenceActor;
class ARadiusGameDataReplicator;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusTimeController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusGameDataReplicator* Replicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugTimeScale;
    
    ARadiusTimeController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDebugTimeScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetClockEnable(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameTimeRefresh();
    
    UFUNCTION(BlueprintCallable)
    void OnGameTimeChanged(float AddedSeconds);
    
};

