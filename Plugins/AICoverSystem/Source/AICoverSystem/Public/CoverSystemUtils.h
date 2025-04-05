#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Cover.h"
#include "CoverHandle.h"
#include "CoverSystemUtils.generated.h"

class UBlackboardComponent;

UCLASS(Blueprintable)
class AICOVERSYSTEM_API UCoverSystemUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCoverSystemUtils();

    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsCover(UBlackboardComponent* BlackboardComp, const FBlackboardKeySelector& Key, FCover Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCoverValid(const FCover& Cover);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCoverHandleValid(const FCoverHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCover GetBlackboardValueAsCover(UBlackboardComponent* BlackboardComp, const FBlackboardKeySelector& Key);
    
};

