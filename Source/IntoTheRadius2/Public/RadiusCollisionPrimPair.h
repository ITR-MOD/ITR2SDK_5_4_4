#pragma once
#include "CoreMinimal.h"
#include "RadiusCollisionPrimPair.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRadiusCollisionPrimPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Prim1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Prim2;
    
    INTOTHERADIUS2_API FRadiusCollisionPrimPair();
};
FORCEINLINE uint32 GetTypeHash(const FRadiusCollisionPrimPair) { return 0; }

