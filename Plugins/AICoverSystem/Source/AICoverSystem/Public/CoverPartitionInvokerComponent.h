#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CoverPartitionInvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AICOVERSYSTEM_API UCoverPartitionInvokerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegisterInvoker;
    
public:
    UCoverPartitionInvokerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterInvoker();
    
    UFUNCTION(BlueprintCallable)
    void RegisterInvoker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRegistedInvoker() const;
    
};

