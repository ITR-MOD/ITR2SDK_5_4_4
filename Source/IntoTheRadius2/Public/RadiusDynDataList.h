#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RadiusDynDataEntry.h"
#include "RadiusDynDataList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRadiusDynDataList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusDynDataEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwningRepActor;
    
public:
    INTOTHERADIUS2_API FRadiusDynDataList();
};

