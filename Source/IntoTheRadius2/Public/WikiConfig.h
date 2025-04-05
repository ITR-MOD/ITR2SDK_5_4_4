#pragma once
#include "CoreMinimal.h"
#include "RadiusConfigurationAssetBase.h"
#include "TagToText.h"
#include "WikiConfig.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UWikiConfig : public URadiusConfigurationAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagToText> CategoryName;
    
    UWikiConfig();

};

