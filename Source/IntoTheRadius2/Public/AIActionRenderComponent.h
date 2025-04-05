#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ActionRenderReplicationInfo.h"
#include "RadiusNPCStaticData.h"
#include "AIActionRenderComponent.generated.h"

class APawn;
class UAudioComponent;
class UNPCConfig;
class URadiusConfigurationSubsystem;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UAIActionRenderComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActionRenderInfo, meta=(AllowPrivateAccess=true))
    FActionRenderReplicationInfo ActionRenderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusNPCStaticData NPCStaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MetaSoundSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AttachedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URadiusConfigurationSubsystem* GameConfigSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNPCConfig* NPCConfig;
    
public:
    UAIActionRenderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartRender(const FGameplayTag& InActionTag, const bool bIgnoreCooldown);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartCooldown();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActionRenderInfo();
    
};

