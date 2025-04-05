#include "CoverSystem.h"
#include "CoverBoundBoxComponent.h"

ACoverSystem::ACoverSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCoverBoundBoxComponent>(TEXT("OctreeBoundComp"));
    this->CoverSystemMode = ECoverSystemMode::Static;
    this->bUsePartitions = false;
    this->PartitionSize = 8196.00f;
    this->PartitionGenerationRange = 9000.00f;
    this->PartitionGenerationRangeZ = 4000.00f;
    this->bUsePlayerPawnsAsPartitionInvokers = true;
    this->bGenerateOnBeginPlay = true;
    this->bGenerateOnNavigationRebuild = false;
    this->MaxNavigationRegenerateInterval = 1.00f;
    this->bEnableAsyncMode = true;
    this->bAsyncLoadStaticCovers = true;
    this->PartitionBuildTaskQueueSize = 64;
    this->bSortPartitionsByPriority = true;
    this->PartitionEvaluateInterval = 0.25f;
    this->PartitionRegenerateInterval = 0.10f;
    this->DeactivePartitionDestroyDelay = 5.00f;
    this->WorkerThreadTimeBudgetPerFrame = 6.50f;
    this->TraceChannel = ECC_WorldStatic;
    this->bDebugDraw = false;
    this->DebugDrawDistance = 12000.00f;
    this->bDrawOctreeBounds = true;
    this->OctreeBoundComponent = (UCoverBoundBoxComponent*)RootComponent;
}

void ACoverSystem::UnOccupyCoverFromController(const FCoverHandle& CoverHandle, AController* Controller) {
}

void ACoverSystem::UnOccupyCover(const FCoverHandle& CoverHandle) {
}

void ACoverSystem::RebaseOrigin(const FVector& NewOrigin, bool bRegenerate) {
}

void ACoverSystem::OnNavigationGenerationFinished(ANavigationData* NavData) {
}

bool ACoverSystem::OccupyCover(AController* Controller, const FCoverHandle& CoverHandle) {
    return false;
}

void ACoverSystem::NotifyNavigationRebuilt() {
}

bool ACoverSystem::IsCoverOccupied(const FCoverHandle& CoverHandle) const {
    return false;
}

bool ACoverSystem::IsAsyncWorkerRunning() const {
    return false;
}

void ACoverSystem::InvalidatePartitions(const FBoxSphereBounds& InBounds, bool bRegenerateImmediately) {
}

AController* ACoverSystem::GetOccupyingController(const FCoverHandle& CoverHandle) const {
    return NULL;
}

ACoverSystem* ACoverSystem::GetCoverSystem(const UObject* WorldContext) {
    return NULL;
}

void ACoverSystem::GetCoversWithinBounds(const FBoxSphereBounds& InBounds, TArray<FCoverHandle>& OutCoverHandles) const {
}

void ACoverSystem::GetCoverDataWithinBounds(const FBoxSphereBounds& InBounds, TArray<FCover>& OutCovers) const {
}

bool ACoverSystem::GetCoverData(const FCoverHandle& CoverHandle, FCoverData& OutData) const {
    return false;
}

void ACoverSystem::GenerateCovers(bool bForceRegenerate, bool bAsync, bool bDeferGenerationIfBusy) {
}


