#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RigVMFunctions/Simulation/RigVMFunction_SimBase.h"
#include "AlsRigVMFunction_ExponentialDecayVector.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsRigVMFunction_ExponentialDecayVector : public FRigVMFunction_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lambda;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    FAlsRigVMFunction_ExponentialDecayVector();
};

