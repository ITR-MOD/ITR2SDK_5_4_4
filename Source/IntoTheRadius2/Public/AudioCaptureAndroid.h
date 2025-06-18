#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AudioCaptureAndroid.generated.h"

class UMicrophoneSpeakComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UAudioCaptureAndroid : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioCaptureAndroid();

    UFUNCTION(BlueprintCallable)
    static void AndroidMicrophoneStop(UMicrophoneSpeakComponent* callbackComp);
    
    UFUNCTION(BlueprintCallable)
    static bool AndroidMicrophoneStart(UMicrophoneSpeakComponent* callbackComp, int32 sampleRateToUse);
    
    UFUNCTION(BlueprintCallable)
    static bool AndroidHasPermission();
    
    UFUNCTION(BlueprintCallable)
    static void AndroidAskPermission();
    
};

