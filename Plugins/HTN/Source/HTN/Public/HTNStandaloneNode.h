#pragma once
#include "CoreMinimal.h"
#include "HTNNode.h"
#include "HTNStandaloneNode.generated.h"

class UHTNDecorator;
class UHTNService;
class UHTNStandaloneNode;

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNStandaloneNode : public UHTNNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRecursionLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlanNextNodesAfterThis: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowFailingDecoratorsOnNodeDuringPlanning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHTNStandaloneNode*> NextNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHTNDecorator*> Decorators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHTNService*> Services;
    
    UHTNStandaloneNode();

};

