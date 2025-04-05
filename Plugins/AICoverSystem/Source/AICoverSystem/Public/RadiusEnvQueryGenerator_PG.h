#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h"
#include "RadiusEnvQueryGenerator_PG.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AICOVERSYSTEM_API URadiusEnvQueryGenerator_PG : public UEnvQueryGenerator_PathingGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue QueryBoundSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue QueryBoundHeight;
    
public:
    URadiusEnvQueryGenerator_PG();

};

