#pragma once
#include "CoreMinimal.h"
#include "AudioMixerBlueprintLibrary.h"
#include "AudioMixerBlueprintLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AIFactors.h"
#include "AmmoContainerStaticData.h"
#include "AmmoStaticData.h"
#include "AttachmentStaticData.h"
#include "PoolActorConfig.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusImpactAssetRow.h"
#include "RadiusItemStaticData.h"
#include "RadiusNPCStaticData.h"
#include "StimuliData.h"
#include "Templates/SubclassOf.h"
#include "WeaponStaticData.h"
#include "RadiusConfigurationSubsystem.generated.h"

class AActor;
class APawn;
class UDifficultyConfig;
class UExplosionConfig;
class UGameConfig;
class UItemsConfig;
class ULootConfig;
class UMissionsConfig;
class UNPCConfig;
class UPhysicalMaterial;
class UPlayerConfig;
class URadiusConfigurationAssetBase;
class USystemConfig;
class UWeaponDefaultsConfig;
class UWikiConfig;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusConfigurationSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemsConfig* ItemsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionsConfig* AllMissionsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameConfig* GameConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerConfig* PlayerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponDefaultsConfig* WeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCConfig* NPCConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USystemConfig* SystemConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootConfig* LootConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultyConfig* DifficultyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExplosionConfig* ExplosionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWikiConfig* WikiConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, URadiusConfigurationAssetBase*> Configurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFactors> AIFactors;
    
public:
    URadiusConfigurationSubsystem();

    UFUNCTION(BlueprintCallable)
    void SwapResult(const FSwapAudioOutputResult& NewSwapResult);
    
    UFUNCTION(BlueprintCallable)
    void SwapOutputDevices(const TArray<FAudioOutputDeviceInfo>& AvailableDevices);
    
    UFUNCTION(BlueprintCallable)
    void SetupConfigValues();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStimuliData GetStimulusDataByTag(const FGameplayTag ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRadiusItemClassByTag(const FGameplayTag ItemId, TSoftClassPtr<AActor>& ItemActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPureWeaponStaticDataByTag(const FGameplayTag& ItemType, FWeaponStaticData& OutData) const;
    
    UFUNCTION(BlueprintCallable)
    FPoolActorConfig GetPoolActorConfig(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRadiusNPCStaticData GetNPCStaticDataByTag(const FGameplayTag ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRadiusNPCStaticData GetNPCData(const APawn* NPCBody) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetItemTagBySoftClass(const TSoftClassPtr<AActor> ItemClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetItemTagByClass(const AActor* ItemActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultyConfig* GetDifficultyConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDeathReasonTextByTag(const FGameplayTag DeathReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerTransformAdjustment(FGameplayTag ControllerType, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBasicStaticDataByTag(const FGameplayTag& ItemType, FRadiusItemStaticData& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttachmentStaticDataByTag(const FGameplayTag& ItemType, FAttachmentStaticData& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAnomalyNameByTag(const FGameplayTag AnomalyType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAmmoStaticDataByTag(const FGameplayTag& ItemType, FAmmoStaticData& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAmmoContainerStaticDataByTag(const FGameplayTag& ItemType, FAmmoContainerStaticData& OutData) const;
    
    UFUNCTION(BlueprintCallable)
    bool FindImpactAssetData(const AActor* Actor, const UPhysicalMaterial* Material, const FName DefaultRow, FRadiusImpactAssetRow& ImpactAssetRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindAmmoStaticData(const FGameplayTag& AmmoCaliber, const FGameplayTag& AmmoType, FAmmoStaticData& OutData) const;
    
};

