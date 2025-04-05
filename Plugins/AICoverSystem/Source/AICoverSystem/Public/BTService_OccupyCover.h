#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_OccupyCover.generated.h"

UCLASS(Blueprintable)
class AICOVERSYSTEM_API UBTService_OccupyCover : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObserveBlackboardValue;
    
public:
    UBTService_OccupyCover();

};

