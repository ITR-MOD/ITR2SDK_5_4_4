#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "GameplayTagContainer.h"
#include "RadiusAIPerceptionStimuliSourceComponent.generated.h"

class URadiusConfigurationSubsystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URadiusConfigurationSubsystem* GameConfigSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
public:
    URadiusAIPerceptionStimuliSourceComponent(const FObjectInitializer& ObjectInitializer);

};

