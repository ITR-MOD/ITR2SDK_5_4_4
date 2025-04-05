#include "EnvQueryGenerator_Covers.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvQueryItemType_CoverBase.h"

UEnvQueryGenerator_Covers::UEnvQueryGenerator_Covers() {
    this->ItemType = UEnvQueryItemType_CoverBase::StaticClass();
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


