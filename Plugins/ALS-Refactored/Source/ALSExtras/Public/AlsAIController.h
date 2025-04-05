#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "AlsAIController.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class ALSEXTRAS_API AAlsAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
public:
    AAlsAIController(const FObjectInitializer& ObjectInitializer);

};

