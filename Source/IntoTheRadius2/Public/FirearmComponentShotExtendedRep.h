#pragma once
#include "CoreMinimal.h"
#include "FirearmComponentShotRep.h"
#include "StackedItem.h"
#include "FirearmComponentShotExtendedRep.generated.h"

USTRUCT(BlueprintType)
struct FFirearmComponentShotExtendedRep : public FFirearmComponentShotRep {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AmmoStateFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStackedItem> AmmoInBarrel;
    
    INTOTHERADIUS2_API FFirearmComponentShotExtendedRep();
};

