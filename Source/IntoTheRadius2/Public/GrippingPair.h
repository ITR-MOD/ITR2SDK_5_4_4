#pragma once
#include "CoreMinimal.h"
#include "GrippingPair.generated.h"

class UObject;
class URadiusHandSocketComponent;

USTRUCT(BlueprintType)
struct FGrippingPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* GripObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusHandSocketComponent* GripSocket;
    
    INTOTHERADIUS2_API FGrippingPair();
};

