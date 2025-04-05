#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BlackboardAssetProvider.h"
#include "UObject/Object.h"
#include "HTN.generated.h"

class UBlackboardData;
class UHTNDecorator;
class UHTNService;
class UHTNStandaloneNode;

UCLASS(Blueprintable)
class HTN_API UHTN : public UObject, public IBlackboardAssetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHTNStandaloneNode*> StartNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHTNDecorator*> RootDecorators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHTNService*> RootServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardAsset;
    
    UHTN();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UBlackboardData* GetBlackboardAsset() const override PURE_VIRTUAL(GetBlackboardAsset, return NULL;);
    
};

