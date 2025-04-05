#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GripSelectorsInterface.h"
#include "RadiusContainerController.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusContainerController : public AActor, public IGripSelectorsInterface {
    GENERATED_BODY()
public:
    ARadiusContainerController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

