#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Info.h"
#include "Cover.h"
#include "CoverBuildParams.h"
#include "CoverData.h"
#include "CoverHandle.h"
#include "CoverPartitionHash.h"
#include "CoverSerializedArchive.h"
#include "ECoverSystemMode.h"
#include "CoverSystem.generated.h"

class AController;
class ACoverSystem;
class ANavigationData;
class UCoverBoundBoxComponent;
class UCoverPartitionInvokerComponent;
class UObject;

UCLASS(Blueprintable)
class AICOVERSYSTEM_API ACoverSystem : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverSystemMode CoverSystemMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePartitions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PartitionSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PartitionGenerationRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PartitionGenerationRangeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlayerPawnsAsPartitionInvokers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateOnNavigationRebuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNavigationRegenerateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAsyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsyncLoadStaticCovers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartitionBuildTaskQueueSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortPartitionsByPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartitionEvaluateInterval;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartitionRegenerateInterval;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivePartitionDestroyDelay;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double WorkerThreadTimeBudgetPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverBuildParams BuildParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawOctreeBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCoverBoundBoxComponent* OctreeBoundComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverSerializedArchive StaticCoverArchive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FCoverPartitionHash, FCoverSerializedArchive> PartitionedStaticCoverArchives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCoverPartitionInvokerComponent*> PartitionInvokers;
    
public:
    ACoverSystem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnOccupyCoverFromController(const FCoverHandle& CoverHandle, AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void UnOccupyCover(const FCoverHandle& CoverHandle);
    
    UFUNCTION(BlueprintCallable)
    void RebaseOrigin(const FVector& NewOrigin, bool bRegenerate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNavigationGenerationFinished(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool OccupyCover(AController* Controller, const FCoverHandle& CoverHandle);
    
    UFUNCTION(BlueprintCallable)
    void NotifyNavigationRebuilt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoverOccupied(const FCoverHandle& CoverHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsyncWorkerRunning() const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidatePartitions(const FBoxSphereBounds& InBounds, bool bRegenerateImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetOccupyingController(const FCoverHandle& CoverHandle) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static ACoverSystem* GetCoverSystem(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCoversWithinBounds(const FBoxSphereBounds& InBounds, TArray<FCoverHandle>& OutCoverHandles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCoverDataWithinBounds(const FBoxSphereBounds& InBounds, TArray<FCover>& OutCovers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCoverData(const FCoverHandle& CoverHandle, FCoverData& OutData) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateCovers(bool bForceRegenerate, bool bAsync, bool bDeferGenerationIfBusy);
    
};

