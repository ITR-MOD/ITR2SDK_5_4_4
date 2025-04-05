#include "EnvQueryTest_ProvidesCover.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_ProvidesCover::UEnvQueryTest_ProvidesCover() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TraceChannel = ECC_Visibility;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


