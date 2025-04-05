#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RadiusMissionObjectiveEntry.h"
#include "RadiusMissionObjectiveList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRadiusMissionObjectiveList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusMissionObjectiveEntry> ObjectiveEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwningRepActor;
    
public:
    INTOTHERADIUS2_API FRadiusMissionObjectiveList();
};

