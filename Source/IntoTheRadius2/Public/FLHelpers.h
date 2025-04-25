#pragma once
#include "CoreMinimal.h"
#include "BlueprintDataDefinitions.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "FindSessionsCallbackProxy.h"
#include "VRBPDatatypes.h"
#include "ConditionsList.h"
#include "DifficultyConfigFloat.h"
#include "DifficultyOptionFloat.h"
#include "EDamageCategory.h"
#include "ELogTypeBP.h"
#include "FLHelpers.generated.h"

class AActor;
class ACullDistanceVolume;
class APawn;
class APlayerController;
class APlayerState;
class UDataTable;
class UGripMotionControllerComponent;
class UObject;
class UPrimitiveComponent;
class URadiusHandSocketComponent;
class URadiusItemDynamicData;
class UScrollBox;
class USoundBase;
class UStaticMeshComponent;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TagsArrayContains(const TArray<FGameplayTag>& TagsArray, const FGameplayTag Tag, const bool bExactMatch);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> SortIntArray(TArray<int32> inArray);
    
    UFUNCTION(BlueprintCallable)
    static void SetUseAsOccluder(UPrimitiveComponent* PrimitiveComponent, const bool bSet);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTriggers(const UObject* WorldContextObject, const TArray<FGameplayTag>& Triggers, const bool bSet);
    
    UFUNCTION(BlueprintCallable)
    static void SetNeverDistanceCull(UStaticMeshComponent* MeshComponent, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetMinDrawDistance(UStaticMeshComponent* MeshComponent, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableCullDistanceVolume(ACullDistanceVolume* Volume, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorByAmmoType(const FGameplayTag AmmoTag, UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetCastStaticShadow(UStaticMeshComponent* MeshComponent, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetCastDynamicShadow(UStaticMeshComponent* MeshComponent, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllowCullDistanceVolume(UStaticMeshComponent* MeshComponent, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RoundVector(const FVector Vector, const int32 Divider);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RadiusLogStacks(const UObject* WorldContextObject, const FString& Message);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RadiusLog(const UObject* WorldContextObject, const FString& Message, const TEnumAsByte<ELogTypeBP> LogLevelType);
    
    UFUNCTION(BlueprintCallable)
    static void PlayWidgetSound(UUserWidget* Widget, const USoundBase* Sound, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString NetIdToString(const FUniqueNetIdRepl& NetId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWidgetUnderWidget(const UWidget* WidgetUpper, const UWidget* WidgetBelow);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWidgetUnderCenterOfAnotherWidget(const UWidget* Widget, const UWidget* WidgetWithCenter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsValidLevelTag(const UObject* WorldContextObject, const FGameplayTag LevelTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsStandalone(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsScrolledToWidget(const UWidget* WidgetObject, const UWidget* WidgetTargetObject, float CurrentScroll, const float Offset);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNetIdEquals(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInTutorial(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInMainMenu(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInCoop(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostPlayerState(const APlayerState* PlayerStateToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsClient(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAllPlayersInRange(const AActor* Actor, const float RangeDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorProtectedFromDamage(const AActor* Target, EDamageCategory DamageCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorLocallyOwned(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAnyParentWithCapacity(UObject* Container);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSessionData(FBlueprintSessionResult Session, FString& HostName, bool& bHasFreeSlots, int32& Ping);
    
    UFUNCTION(BlueprintCallable)
    static FVector2f GetPosition(const UWidget* TargetWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerId(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetOwnerActor(UUserWidget* Widget, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EVRHand GetOtherHand(const EVRHand Hand);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> GetObjectReferences(UObject* Obj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetNumericalTags(const UObject* WorldContextObject, const int32 NumberOfTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetLocalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetLevelTagFromGateTag(const UObject* WorldContextObject, const FGameplayTag GateTag);

    UFUNCTION(BlueprintCallable)
    static TArray<URadiusHandSocketComponent*> GetHandSocketsByTags(const AActor* Actor, FGameplayTagContainer GripTagsToInclude, FGameplayTagContainer GripTagsToExclude);

    UFUNCTION(BlueprintCallable)
    static URadiusHandSocketComponent* GetHandSocketByName(const AActor* Actor, const FName& SlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetHandHolsterName(UGripMotionControllerComponent* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EVRHand GetHandByController(UGripMotionControllerComponent* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetFireModeFromTags(const UObject* WorldContextObject, const TArray<FGameplayTag>& Tags);
    
    UFUNCTION(BlueprintCallable)
    static FString GetEnginePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetDysfunctionFromTags(const UObject* WorldContextObject, const TArray<FGameplayTag>& Tags);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDifficultyOptionFromDifficultyConfigByTag(const FGameplayTag OptionTag, const FDifficultyConfigFloat DifficultyConfig, FDifficultyOptionFloat& OutOption);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDifficultyOptionFromDifficultyConfigByFloat(const float OptionTag, const FDifficultyConfigFloat DifficultyConfig, FDifficultyOptionFloat& OutOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetCurrentFireModeName(const UObject* WorldContextObject, const URadiusItemDynamicData* DynamicData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAngleBetweenAngles(float A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetAmmoTypeName(const UObject* WorldContextObject, const FGameplayTag& AmmoTypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetAmmoCaliberName(const UObject* WorldContextObject, const FGameplayTag& AmmoTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<APawn*> GetAllPlayerPawns(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FVector2f GetAbsolutePositionAtPosition(const UWidget* TargetWidget);
    
    UFUNCTION(BlueprintCallable)
    static FVector2f GetAbsolutePosition(const UWidget* TargetWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GenerateUid(const FString& Prefix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GenerateQuestCoopJoinCode();
    
    UFUNCTION(BlueprintCallable)
    static void CheckScrollForButtons(UScrollBox* CurrentScrollBox, TMap<UWidget*, int32> TitleWidgetToCategoryButtonIndex, TMap<UWidget*, UScrollBox*> TitleWidgetToParentScrollBox, bool& IsLastTitleFounded, int32& ButtonIndexToActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckConditions(const FConditionsList& Conditions);
    
    UFUNCTION(BlueprintCallable)
    static bool CanPutItemInContainerWithoutOverweight(AActor* ContainerParentActor, AActor* Item);
    
    UFUNCTION(BlueprintCallable)
    static bool AddTransformArrayToTable(UDataTable* DataTable, const FName RowName, const TArray<FTransform>& Transforms);
    
};

