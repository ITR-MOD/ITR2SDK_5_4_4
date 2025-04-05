#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RadiusDynDataEntry.generated.h"

class URadiusItemDynamicData;

USTRUCT(BlueprintType)
struct FRadiusDynDataEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusItemDynamicData* Entry;
    
    INTOTHERADIUS2_API FRadiusDynDataEntry();
};

