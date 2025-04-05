#pragma once
#include "CoreMinimal.h"
#include "IDsList.generated.h"

USTRUCT(Atomic, BlueprintType)
struct INTOTHERADIUS2_API FIDsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InstanceIDs;
    
    FIDsList();
};

