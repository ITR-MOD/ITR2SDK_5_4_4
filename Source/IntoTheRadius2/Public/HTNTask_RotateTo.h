#pragma once
#include "CoreMinimal.h"
#include "HTNTask_BlackboardBase.h"
#include "HTNTask_RotateTo.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UHTNTask_RotateTo : public UHTNTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
public:
    UHTNTask_RotateTo();

};

