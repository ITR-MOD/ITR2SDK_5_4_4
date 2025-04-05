#pragma once
#include "CoreMinimal.h"
#include "Components/BillboardComponent.h"
#include "GameplayTagContainer.h"
#include "MapMarkerComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UMapMarkerComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PointConfigTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> AdditionalDisplayText;
    
    UMapMarkerComponent(const FObjectInitializer& ObjectInitializer);

};

