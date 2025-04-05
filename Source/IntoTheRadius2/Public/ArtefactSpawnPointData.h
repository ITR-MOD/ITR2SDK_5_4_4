#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ArtefactSpawnPointData.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FArtefactSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NestUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NestTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArtefactTag;
    
    INTOTHERADIUS2_API FArtefactSpawnPointData();
};

