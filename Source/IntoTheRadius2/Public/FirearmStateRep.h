#pragma once
#include "CoreMinimal.h"
#include "FirearmStateRep.generated.h"

USTRUCT(BlueprintType)
struct FFirearmStateRep {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Frame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WeaponFlags;
    
public:
    INTOTHERADIUS2_API FFirearmStateRep();
};

