#include "EnvQueryTest_ParallelToCover.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_ParallelToCover::UEnvQueryTest_ParallelToCover() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Minimum;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->TestMode = EEnvTestParallerCover::Dot2D;
}


