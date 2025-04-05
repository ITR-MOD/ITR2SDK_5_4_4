#include "EnvQueryTest_TraceWithDebug.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_TraceWithDebug::UEnvQueryTest_TraceWithDebug() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bDebug = false;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


