#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_BestTop.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UEnvQueryTest_BestTop : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItems;
    
    UEnvQueryTest_BestTop();

};

