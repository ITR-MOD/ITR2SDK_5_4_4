#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "RadiusTextBlock.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    URadiusTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetWrapTextAt(float Offset);
    
};

