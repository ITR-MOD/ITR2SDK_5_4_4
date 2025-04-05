#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MissionPoint.h"
#include "MissionObjectivePoint.generated.h"

class UBillboardComponent;

UCLASS(Abstract, Blueprintable)
class AMissionObjectivePoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* PointIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionPoint PointConfiguration;
    
    AMissionObjectivePoint(const FObjectInitializer& ObjectInitializer);

};

