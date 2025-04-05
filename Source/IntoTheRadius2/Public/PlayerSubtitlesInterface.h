#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESubtitleInstigator.h"
#include "PlayerSubtitlesInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPlayerSubtitlesInterface : public UInterface {
    GENERATED_BODY()
};

class IPlayerSubtitlesInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSubtitlesSave(bool bAutosave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSubtitles(ESubtitleInstigator SubtitleInstigator, const FText& Message, float duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSubtitles();
    
};

