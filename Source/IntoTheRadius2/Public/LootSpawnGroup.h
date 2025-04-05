#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LootGenerateInterface.h"
#include "RadiusSpawnGroup.h"
#include "LootSpawnGroup.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ALootSpawnGroup : public ARadiusSpawnGroup, public ILootGenerateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LootTable;
    
    ALootSpawnGroup(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

