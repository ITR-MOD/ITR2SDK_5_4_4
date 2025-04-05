#include "RadiusAISense_Sight.h"
#include "Perception/AIPerceptionTypes.h"

URadiusAISense_Sight::URadiusAISense_Sight() {
    this->NotifyType = EAISenseNotifyType::OnPerceptionChange;
    this->bAutoRegisterAllPawnsAsSources = true;
    this->MaxTracesPerTick = 1;
    this->MaxAsyncTracesPerTick = 10;
    this->MinQueriesPerTimeSliceCheck = 1;
    this->MaxTimeSlicePerTick = 0.00f;
    this->HighImportanceQueryDistanceThreshold = 300.00f;
    this->MaxQueryImportance = 12.00f;
    this->SightLimitQueryImportance = 2.00f;
    this->PendingQueriesBudgetReductionRatio = 0.50f;
    this->bUseAsynchronousTraceForDefaultSightQueries = false;
}


