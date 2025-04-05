#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConditionalHider.generated.h"

class URadiusCondition;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API AConditionalHider : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URadiusCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteCompletely;
    
    AConditionalHider(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAccessLevelChanged(int32 AccessLevel);
    
    UFUNCTION(BlueprintCallable)
    void CheckConditions();
    
};

