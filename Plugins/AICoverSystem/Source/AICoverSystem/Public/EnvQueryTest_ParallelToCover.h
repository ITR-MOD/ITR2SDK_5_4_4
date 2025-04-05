#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EEnvTestParallerCover.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_ParallelToCover.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class AICOVERSYSTEM_API UEnvQueryTest_ParallelToCover : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnvTestParallerCover TestMode;
    
    UEnvQueryTest_ParallelToCover();

};

