#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTaskOwnerInterface.h"
#include "HTNNode.generated.h"

class UHTN;
class UHTNComponent;
class UHTNNode;

UCLASS(Abstract, Blueprintable, Config=Game)
class HTN_API UHTNNode : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTNNode* TemplateNode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* HTNAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHTNComponent* OwnerComponent;
    
public:
    UHTNNode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTNNode* GetTemplateNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStaticDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetShortDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTNComponent* GetOwnerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNodeName() const;
    

    // Fix for true pure virtual functions not being implemented
};

