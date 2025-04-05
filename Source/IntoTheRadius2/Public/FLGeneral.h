#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ESubtitleInstigator.h"
#include "MinMaxFloat.h"
#include "MinMaxInt.h"
#include "Templates/SubclassOf.h"
#include "FLGeneral.generated.h"

class AActor;
class APlayerController;
class UActorComponent;
class UAnimMontage;
class UExponentialHeightFogComponent;
class ULightComponent;
class UObject;
class UPhysicsConstraintComponent;
class UPrimitiveComponent;
class USceneComponent;
class USplineComponent;
class UWorld;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLGeneral : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLGeneral();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TagsArrayAsString(const FString& Prefix, TArray<FGameplayTag> TagsArray);
    
    UFUNCTION(BlueprintCallable)
    static void SortMapByKey(UPARAM(Ref) TMap<float, AActor*>& Map, const bool bAscending);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowSubtitlesSave(const UObject* WorldContextObject, bool bAutosave);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowSubtitles(const UObject* WorldContextObject, const ESubtitleInstigator SubtitleInstigator, const FText& Message, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void ShowMessage(const FString& Message, const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    static void SetVolumetricFogStartDistance(UExponentialHeightFogComponent* Component, const float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetSceneComponentWorldLocationAndRotationNoPhysics(USceneComponent* SceneComponent, const FVector& NewLocation, const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightVisibility(ULightComponent* Light, bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightMapType(UPrimitiveComponent* Component, const ELightmapType LightmapType);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightAffectsWorld(ULightComponent* Component, bool bAffects);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigation(UActorComponent* Component, bool bRelevant);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularRotationOffset(UPhysicsConstraintComponent* Component, const FRotator RotationOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorSimulatePhysics(const AActor* Actor, bool Simulate, bool zeroVel, bool& Success, UPrimitiveComponent*& Primitive);
    
    UFUNCTION(BlueprintCallable)
    static bool SetActorEnableGravity(const AActor* Actor, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorEditorOnly(AActor* Actor, const bool bSet);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorCookingSettings(AActor* Actor, bool bCookForPC, bool bCookForMobile);
    
    UFUNCTION(BlueprintCallable)
    static void SafeDestroyActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void RunConsoleCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag RequestGameplayTag(FName TagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_GetRotationVector(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable)
    static void PutActorInPersistentLevel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float PointPlaneDist(const FVector& Point, const FVector& PlaneBase, const FVector& PlaneNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float PointBoxDist(const FVector& Point, const FVector& BoxOrigin, const FVector& BoxExtend, const FRotator& BoxRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float PointActorDist(const FVector& Point, const AActor* Actor, bool bOnlyCollidingComponents, bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Negate_Int(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Negate_Float(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MinMaxInt_Random(const FMinMaxInt Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MinMaxInt_IsZero(const FMinMaxInt Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MinMaxFloat_Random(const FMinMaxFloat Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MinMaxFloat_IsZero(const FMinMaxFloat Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MinMaxFloat_Include(const FMinMaxFloat Range, const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D MapRangeUnclamped(const FVector2D Value, const FVector2D InRangeA, const FVector2D InRangeB, const FVector2D OutRangeA, const FVector2D OutRangeB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D MapRangeClamped(const FVector2D Value, const FVector2D InRangeA, const FVector2D InRangeB, const FVector2D OutRangeA, const FVector2D OutRangeB);
    
    UFUNCTION(BlueprintCallable)
    static void KillActorWithChildren(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KillActorsByClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorsClass, bool bWithChildren);
    
    UFUNCTION(BlueprintCallable)
    static void KillActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInBounds(const FVector& Point, const FTransform& BoxWorldTransform, const FVector& BoxExtent, const bool bIgnoreZ);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsComponentBoundsIntersect(const UPrimitiveComponent* ComponentA, const UPrimitiveComponent* ComponentB);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideSubtitles(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool HasCommandLineParameter(const FString& ParameterName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTimeStringFromSeconds(const int32 TotalSeconds, const bool bNoSeconds, FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTimeSpentString(int32 TotalMinutes, FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetStreamingLevelNameFromActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSignedAngle(FVector Normal, FVector v1, FVector v2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetShortTimeStringFromSeconds(const int32 TotalSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPureActorBounds(const AActor* Actor, bool bOnlyCollidingComponents, FVector& BoxOrigin, FVector& BoxExtend, bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPointsBoxSize(const TArray<FVector> Points);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetParentClass(UClass* Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetObjectParentClass(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNumberAsCharacter(const int32 Num, const bool Uppercase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetFirstPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDateTimeString(FDateTime DateTime, FString& String);
    
    UFUNCTION(BlueprintCallable)
    static UWorld* GetCurrentWorld();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCommandLineParameterValue(const FString& ParameterName);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetBoneTransformFromMontage(const UAnimMontage* Montage, FName BoneName, float Time, int32 SlotAnimTrackIndex, int32 AnimationSegmentIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FindDistanceAlongSplineClosestToLocation(const USplineComponent* Spline, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyActorDynamicData(AActor* Actor, const bool bDetachHolstered, const bool bKillActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDistanceExceed(const FVector& FromPoint, const TArray<FVector>& ToLocations, const float DistanceSquared);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalcLocalBounds(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddComponentToActor(AActor* BaseActor, TSubclassOf<UActorComponent> AttachedComponent);
    
};

