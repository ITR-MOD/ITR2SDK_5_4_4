#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "UObject/NoExportTypes.h"
#include "EnvQueryContext_HTNBlueprintBase.generated.h"

class AActor;
class UObject;
class UWorldStateProxy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HTN_API UEnvQueryContext_HTNBlueprintBase : public UEnvQueryContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TempQuerierActor;
    
public:
    UEnvQueryContext_HTNBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorldStateProxy* GetWorldState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetQuerierLocation() const;
    
};

