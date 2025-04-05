#pragma once
#include "CoreMinimal.h"
#include "EnemyInfo.h"
#include "GroupEnemiesInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FGroupEnemiesInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FEnemyInfo> EnemyInfos;
    
    FGroupEnemiesInfo();
};

