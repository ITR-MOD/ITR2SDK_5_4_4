#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StackedItem.h"
#include "FirearmAmmoStateRep.generated.h"

USTRUCT(BlueprintType)
struct FFirearmAmmoStateRep {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMagazineAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStackedItem> AmmoInBarrel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> MagazineAmmo;
    
    INTOTHERADIUS2_API FFirearmAmmoStateRep();
};

