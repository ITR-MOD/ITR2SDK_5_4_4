#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DistanceGripCandidate.h"
#include "DistanceGripManager.generated.h"

class ARadiusPlayerCharacter;
class URadiusItemDynamicData;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UDistanceGripManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusPlayerCharacter* GripSystemOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URadiusItemDynamicData*, FDistanceGripCandidate> CandidatePool;
    
public:
    UDistanceGripManager();

private:
    UFUNCTION(BlueprintCallable)
    void LevelTransitionStartCallback();
    
    UFUNCTION(BlueprintCallable)
    void LevelTransitionEndCallback();
    
    UFUNCTION(BlueprintCallable)
    void ItemTakenFromLevelCallback(URadiusItemDynamicData* ItemTaken);
    
    UFUNCTION(BlueprintCallable)
    void ItemStoredToLevelCallback(URadiusItemDynamicData* ItemStored);
    
    UFUNCTION(BlueprintCallable)
    void ItemRemovedFromLevelCallback(URadiusItemDynamicData* ItemRemoved);
    
    UFUNCTION(BlueprintCallable)
    void ItemActorRemovedCallback(URadiusItemDynamicData* ItemWithActorRemoved);
    
};

