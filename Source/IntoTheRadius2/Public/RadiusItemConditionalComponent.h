#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagContainer.h"
#include "RadiusItemConditionalComponent.generated.h"

class URadiusItemDynamicData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusItemConditionalComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShowConditionTag;
    
    URadiusItemConditionalComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDataUnlinking(URadiusItemDynamicData* PreviousDynamicData);
    
    UFUNCTION(BlueprintCallable)
    void OnDataLinked();
    
    UFUNCTION(BlueprintCallable)
    void OnAdditionalTagChanged(const FGameplayTag Tag, const bool bAdded);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckCondition();
    
};

