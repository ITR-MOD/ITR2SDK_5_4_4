#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "LevelMissionPoints.h"
#include "MissionCategory.h"
#include "MissionPoint.h"
#include "RadiusConfigurationAssetBase.h"
#include "MissionsConfig.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UMissionsConfig : public URadiusConfigurationAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionRerollCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionCategory> MissionCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLevelMissionPoints> MissionPoints;
    
    UMissionsConfig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetIconColorForCategory(const FGameplayTag CategoryId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMissionPoint FindMissionPoint(const FGameplayTag PointTag, FGameplayTag& OutLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag FindCategoryByMissionId(const FGameplayTag MissionId) const;
    
};

