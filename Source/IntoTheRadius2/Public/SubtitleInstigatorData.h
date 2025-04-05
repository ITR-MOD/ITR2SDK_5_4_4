#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SubtitleInstigatorData.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FSubtitleInstigatorData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InstigatorName;
    
    FSubtitleInstigatorData();
};

