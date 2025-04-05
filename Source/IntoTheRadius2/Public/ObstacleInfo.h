#pragma once
#include "CoreMinimal.h"
#include "ObstacleInfo.generated.h"

class AActor;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FObstacleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ObstacleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysMaterial;
    
    INTOTHERADIUS2_API FObstacleInfo();
};

