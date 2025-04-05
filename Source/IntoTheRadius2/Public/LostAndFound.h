#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRBPDatatypes.h"
#include "LostAndFound.generated.h"

class UGripMotionControllerComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ALostAndFound : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ItemsInContainer;
    
public:
    ALostAndFound(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnItemGripped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
};

