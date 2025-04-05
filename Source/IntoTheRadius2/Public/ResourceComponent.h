#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnResorceChangeDelegate.h"
#include "ResourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UResourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResorceChange OnResourceChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResourceAmount, meta=(AllowPrivateAccess=true))
    int32 ResourceAmount;
    
public:
    UResourceComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetResource(int32 NewAmount);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResourceAmount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceAmount();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResourceChangeCallback(bool bIsSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeResource(int32 DeltaAmount);
    
};

