#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConditionsList.h"
#include "ERadiusSpawnerType.h"
#include "RadiusSpawnerInterface.h"
#include "SpawnerGenerateInterface.h"
#include "RadiusSpawnGroup.generated.h"

class ASpawnPoint;
class UTexture2D;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusSpawnGroup : public AActor, public IRadiusSpawnerInterface, public ISpawnerGenerateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditionsList RequiredConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldWaitTideToGenerate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BillboardTexture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AttachedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<ASpawnPoint*> AttachedPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FString SpawnerUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    uint8 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERadiusSpawnerType SpawnerType;
    
public:
    ARadiusSpawnGroup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CollectAttachedSpawners();
    

    // Fix for true pure virtual functions not being implemented
};

