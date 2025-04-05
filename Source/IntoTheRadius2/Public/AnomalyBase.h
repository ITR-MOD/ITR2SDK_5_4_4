#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusAnomalyInterface.h"
#include "RadiusDamageCauserInterface.h"
#include "AnomalyBase.generated.h"

class UAnomalySaveData;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API AAnomalyBase : public AActor, public IRadiusAnomalyInterface, public IRadiusDamageCauserInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FString AnomalyUniqueId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckVolumesDebug;
    
    AAnomalyBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    UAnomalySaveData* FindAnomalySaveData();
    

    // Fix for true pure virtual functions not being implemented
};

