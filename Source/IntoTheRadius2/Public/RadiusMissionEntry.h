#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RadiusMissionEntry.generated.h"

class UAvailableMission;

USTRUCT(BlueprintType)
struct FRadiusMissionEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailableMission* Entry;
    
    INTOTHERADIUS2_API FRadiusMissionEntry();
};

