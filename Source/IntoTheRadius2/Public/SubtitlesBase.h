#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESubtitleInstigator.h"
#include "SubtitlesBase.generated.h"

class USceneComponent;
class USubtitlesWidget;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ASubtitlesBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubtitlesWidget* SubtitlesWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraComponent;
    
public:
    ASubtitlesBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowSave(bool bAutosave);
    
    UFUNCTION(BlueprintCallable)
    void Show(ESubtitleInstigator SubtitleInstigator, const FText& Message, float duration);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraToFollow(USceneComponent* NewCameraComponent);
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USubtitlesWidget* GetSubtitlesWidget();
    
};

