#pragma once
#include "CoreMinimal.h"
#include "RadiusSpawnGroup.h"
#include "SpawnGroupConfig.h"
#include "MonsterSpawnGroup.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API AMonsterSpawnGroup : public ARadiusSpawnGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnGroupConfig Config;
    
    AMonsterSpawnGroup(const FObjectInitializer& ObjectInitializer);

};

