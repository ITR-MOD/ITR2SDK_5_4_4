#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/ExpandableArea.h"
#include "RadiusExpandableArea.generated.h"

class UWidget;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusExpandableArea : public UExpandableArea {
    GENERATED_BODY()
public:
    URadiusExpandableArea();

    UFUNCTION(BlueprintCallable)
    void SynchronizeProperties();
    
    UFUNCTION(BlueprintCallable)
    void SetExpandedImage(const FSlateBrush Image);
    
    UFUNCTION(BlueprintCallable)
    void SetContentForSlot(const FName SlotName, UWidget* Content);
    
    UFUNCTION(BlueprintCallable)
    void SetCollapsedImage(const FSlateBrush Image);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotExists(const FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlotNames(TArray<FName>& SlotNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetExpandedImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetContentForSlot(const FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetCollapsedImage() const;
    
};

