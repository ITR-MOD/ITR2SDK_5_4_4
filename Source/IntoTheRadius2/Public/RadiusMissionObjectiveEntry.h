#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RadiusMissionObjectiveEntry.generated.h"

class URadiusMissionObjectiveBase;

USTRUCT(BlueprintType)
struct FRadiusMissionObjectiveEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusMissionObjectiveBase* Entry;
    
    INTOTHERADIUS2_API FRadiusMissionObjectiveEntry();
};

