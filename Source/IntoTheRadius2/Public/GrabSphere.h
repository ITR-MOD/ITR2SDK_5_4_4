#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GrabSphere.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UGrabSphere : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRightHand;
    
    UGrabSphere(const FObjectInitializer& ObjectInitializer);

};

