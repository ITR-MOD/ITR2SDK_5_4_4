#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SubtitlesWidget.generated.h"

class AActor;
class UDataTable;
class UImage;
class URichTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API USubtitlesWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SaveImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowMessageAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SaveImageAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwningActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InstigatorNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SubtitleStyles;
    
public:
    USubtitlesWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URichTextBlock* GetTextComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetShowMessageAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetSaveImageComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetSaveIconAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetBackgroundComponent();
    
};

