#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UObject/NoExportTypes.h"
#include "BTService_OccupyCoversInPlace.generated.h"

UCLASS(Blueprintable)
class AICOVERSYSTEM_API UBTService_OccupyCoversInPlace : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCharacterCapsuleBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundExtents;
    
public:
    UBTService_OccupyCoversInPlace();

};

