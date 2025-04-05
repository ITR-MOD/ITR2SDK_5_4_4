#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusBed.generated.h"

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API ARadiusBed : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionRadius;
    
    ARadiusBed(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ArePlayersNear();
    
};

