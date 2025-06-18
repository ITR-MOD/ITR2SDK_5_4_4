#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "NoParamsDelegateDelegate.h"
#include "OneParamActorDelegateDelegate.h"
#include "RadiusStoreVolume.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusStoreVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamActorDelegate OnPlayerEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnFirstPlayerEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamActorDelegate OnPlayerExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnLastPlayerExit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlayersInVolume;
    
public:
    ARadiusStoreVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerExitEvent(AActor* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEnteredEvent(AActor* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLastPlayerExitEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFirstPlayerEnteredEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishLoadLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyPlayersInside() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckPlayersInVolume();
    
};

