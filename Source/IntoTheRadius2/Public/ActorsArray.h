#pragma once
#include "CoreMinimal.h"
#include "ActorsArray.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Array;
  
    INTOTHERADIUS2_API FActorsArray();
  
};

