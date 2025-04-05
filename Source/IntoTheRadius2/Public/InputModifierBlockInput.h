#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "EActionType.h"
#include "InputModifierBlockInput.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class INTOTHERADIUS2_API UInputModifierBlockInput : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType ActionType;
    
    UInputModifierBlockInput();

};

