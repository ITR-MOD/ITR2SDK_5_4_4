#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LootTableConfig.h"
#include "LootGenerateInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULootGenerateInterface : public UInterface {
    GENERATED_BODY()
};

class ILootGenerateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GenerateLoot(const FLootTableConfig& LootTableConfig, TArray<FName>& Excluded);
    
};

