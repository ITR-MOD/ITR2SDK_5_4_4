#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InfoControllerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UInfoControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UInfoControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowInfo(bool bShow, bool bLeft);
    
};

