#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "HTNStandaloneNode.h"
#include "HTNNode_SubNetworkDynamic.generated.h"

class UHTN;

UCLASS(Blueprintable)
class HTN_API UHTNNode_SubNetworkDynamic : public UHTNStandaloneNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* DefaultHTN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTakeHTNFromWorldstateKey: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InjectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TakeHTNFromWorldstateKey;
    
    UHTNNode_SubNetworkDynamic();

};

