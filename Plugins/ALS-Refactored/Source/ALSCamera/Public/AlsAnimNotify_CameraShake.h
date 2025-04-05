#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "AlsAnimNotify_CameraShake.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable, CollapseCategories)
class ALSCAMERA_API UAlsAnimNotify_CameraShake : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeScale;
    
public:
    UAlsAnimNotify_CameraShake();

};

