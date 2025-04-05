#include "EnvQueryContext_HTNBlueprintBase.h"

UEnvQueryContext_HTNBlueprintBase::UEnvQueryContext_HTNBlueprintBase() {
    this->TempQuerierActor = NULL;
}





UWorldStateProxy* UEnvQueryContext_HTNBlueprintBase::GetWorldState() const {
    return NULL;
}

FVector UEnvQueryContext_HTNBlueprintBase::GetQuerierLocation() const {
    return FVector{};
}


