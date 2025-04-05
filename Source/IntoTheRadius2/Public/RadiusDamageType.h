#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "EDamageCategory.h"
#include "RadiusDamageType.generated.h"

class UDamageHandler;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusDamageType : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageCategory DamageCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageHandler* DamageHandler;
    
    URadiusDamageType();

};

