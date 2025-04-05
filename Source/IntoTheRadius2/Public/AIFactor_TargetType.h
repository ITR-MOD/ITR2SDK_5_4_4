#pragma once
#include "CoreMinimal.h"
#include "AIFactor.h"
#include "AIFactor_TargetType.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UAIFactor_TargetType : public UAIFactor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Position;
    
public:
    UAIFactor_TargetType();

};

