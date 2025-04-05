#pragma once
#include "CoreMinimal.h"
#include "StackedItem.h"
#include "StackedItemsVerified.generated.h"

USTRUCT(BlueprintType)
struct FStackedItemsVerified {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStackedItem> Items;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 Frame;
    
    INTOTHERADIUS2_API FStackedItemsVerified();
};

