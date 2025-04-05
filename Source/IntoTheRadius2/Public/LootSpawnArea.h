#pragma once
#include "CoreMinimal.h"
#include "LootSpawnPoint.h"
#include "LootSpawnArea.generated.h"

class AActor;
class UBoxComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ALootSpawnArea : public ALootSpawnPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeNonFit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
public:
    ALootSpawnArea(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ArrangeItems();
    
    UFUNCTION(BlueprintCallable)
    void ArrangeCustomItems(TArray<AActor*> Items);
    
};

