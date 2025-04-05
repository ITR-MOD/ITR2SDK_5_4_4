#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "HTNCustomLocationSource.generated.h"

class AActor;
class UWorldStateProxy;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class HTN_API UHTNCustomLocationSource : public UObject {
    GENERATED_BODY()
public:
    UHTNCustomLocationSource();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideLocations(TArray<FVector>& OutLocations, const AActor* Owner, const UWorldStateProxy* WorldStateProxy, const FBlackboardKeySelector& BlackboardKeySelector) const;
    
};

