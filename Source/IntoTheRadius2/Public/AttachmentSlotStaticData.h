#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusItemStaticData.h"
#include "AttachmentSlotStaticData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAttachmentSlotStaticData : public FRadiusItemStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FAttachmentSlotStaticData();
};

