#pragma once
#include "CoreMinimal.h"
#include "RadiusNpcGameData.h"
#include "RadiusNpcGameDataContainer.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FRadiusNpcGameDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusNpcGameData> NpcSaveData;
    
    INTOTHERADIUS2_API FRadiusNpcGameDataContainer();
};

