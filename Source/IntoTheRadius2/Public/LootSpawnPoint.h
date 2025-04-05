#pragma once
#include "CoreMinimal.h"
#include "VRBPDatatypes.h"
#include "LootCategory.h"
#include "LootGenerateInterface.h"
#include "LootToSpawn.h"
#include "SpawnPoint.h"
#include "LootSpawnPoint.generated.h"

class AActor;
class UGripMotionControllerComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ALootSpawnPoint : public ASpawnPoint, public ILootGenerateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootCategory> LootCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FLootToSpawn> SpawnedItems;
    
public:
    ALootSpawnPoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SpawnNext();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemGripped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
private:
    UFUNCTION(BlueprintCallable)
    void EnablePhysicsAndSpawnNext(AActor* Item);
    

    // Fix for true pure virtual functions not being implemented
};

