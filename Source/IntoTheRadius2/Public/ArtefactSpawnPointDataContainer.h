#pragma once
#include "CoreMinimal.h"
#include "ArtefactSpawnPointData.h"
#include "ArtefactSpawnPointDataContainer.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FArtefactSpawnPointDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArtefactSpawnPointData> PointData;
    
    INTOTHERADIUS2_API FArtefactSpawnPointDataContainer();
};

