#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RadiusMissionEntry.h"
#include "RadiusMissionList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRadiusMissionList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusMissionEntry> MissionEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwningRepActor;
    
public:
    INTOTHERADIUS2_API FRadiusMissionList();
};

