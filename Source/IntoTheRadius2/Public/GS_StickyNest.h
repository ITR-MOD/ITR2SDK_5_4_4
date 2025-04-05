#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GripScripts/VRGripScriptBase.h"
#include "EStickyNestType.h"
#include "GS_StickyNest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UGS_StickyNest : public UVRGripScriptBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStickyNestType> NestType;
    
    UGS_StickyNest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNestRotation(FQuat NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMoveSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakDistance(float NewDistance);
    
};

