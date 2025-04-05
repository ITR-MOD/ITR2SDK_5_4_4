#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AttachmentModuleInterface.generated.h"

UINTERFACE(Blueprintable)
class UAttachmentModuleInterface : public UInterface {
    GENERATED_BODY()
};

class IAttachmentModuleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyHighlightChanged(const bool IsHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasHolsteredItems();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasAttachments();
    
};

