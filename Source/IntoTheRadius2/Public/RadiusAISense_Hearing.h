#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "RadiusAINoiseEvent.h"
#include "RadiusAISense_Hearing.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class INTOTHERADIUS2_API URadiusAISense_Hearing : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusAINoiseEvent> NoiseEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOfSoundSq;
    
public:
    URadiusAISense_Hearing();

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static void ReportNoiseEvent(UObject* WorldContextObject, const FVector NoiseLocation, const float Loudness, AActor* Instigator, const float MaxRange, const FName Tag);

};

