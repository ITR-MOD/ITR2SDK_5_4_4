#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_FreeCover.generated.h"

UCLASS(Blueprintable)
class AICOVERSYSTEM_API UEnvQueryTest_FreeCover : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeOnSelfOccupy;
    
public:
    UEnvQueryTest_FreeCover();

};

