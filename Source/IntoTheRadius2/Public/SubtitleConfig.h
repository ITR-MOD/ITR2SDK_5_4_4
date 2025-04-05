#pragma once
#include "CoreMinimal.h"
#include "ESubtitleInstigator.h"
#include "SubtitleConfig.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FSubtitleConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleInstigator SubtitleInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    FSubtitleConfig();
};

