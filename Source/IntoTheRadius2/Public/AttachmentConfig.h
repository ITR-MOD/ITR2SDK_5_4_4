#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemConfiguration.h"
#include "Templates/SubclassOf.h"
#include "AttachmentConfig.generated.h"

class ARadiusItemBase;

UCLASS(Blueprintable, EditInlineNew)
class UAttachmentConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARadiusItemBase> AttachmentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemConfiguration ItemConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShopLockDetach;
    
    UAttachmentConfig();

};

