#include "FLGeneral.h"
#include "Templates/SubclassOf.h"

UFLGeneral::UFLGeneral() {
}

FString UFLGeneral::TagsArrayAsString(const FString& Prefix, TArray<FGameplayTag> TagsArray) {
    return TEXT("");
}

void UFLGeneral::SortMapByKey(TMap<float, AActor*>& Map, const bool bAscending) {
}

void UFLGeneral::ShowSubtitlesSave(const UObject* WorldContextObject, bool bAutosave) {
}

void UFLGeneral::ShowSubtitles(const UObject* WorldContextObject, const ESubtitleInstigator SubtitleInstigator, const FText& Message, float duration) {
}

void UFLGeneral::ShowMessage(const FString& Message, const FString& Title) {
}

void UFLGeneral::SetVolumetricFogStartDistance(UExponentialHeightFogComponent* Component, const float Distance) {
}

void UFLGeneral::SetSceneComponentWorldLocationAndRotationNoPhysics(USceneComponent* SceneComponent, const FVector& NewLocation, const FRotator& NewRotation) {
}

void UFLGeneral::SetLightVisibility(ULightComponent* Light, bool IsVisible) {
}

void UFLGeneral::SetLightMapType(UPrimitiveComponent* Component, const ELightmapType LightmapType) {
}

void UFLGeneral::SetLightAffectsWorld(ULightComponent* Component, bool bAffects) {
}

void UFLGeneral::SetCanEverAffectNavigation(UActorComponent* Component, bool bRelevant) {
}

void UFLGeneral::SetAngularRotationOffset(UPhysicsConstraintComponent* Component, const FRotator RotationOffset) {
}

void UFLGeneral::SetActorSimulatePhysics(const AActor* Actor, bool Simulate, bool zeroVel, bool& Success, UPrimitiveComponent*& Primitive) {
}

bool UFLGeneral::SetActorEnableGravity(const AActor* Actor, bool Enable) {
    return false;
}

void UFLGeneral::SetActorEditorOnly(AActor* Actor, const bool bSet) {
}

void UFLGeneral::SetActorCookingSettings(AActor* Actor, bool bCookForPC, bool bCookForMobile) {
}

void UFLGeneral::SafeDestroyActor(AActor* Actor) {
}

void UFLGeneral::RunConsoleCommand(const FString& Command) {
}

FGameplayTag UFLGeneral::RequestGameplayTag(FName TagName) {
    return FGameplayTag{};
}

FVector UFLGeneral::Quat_GetRotationVector(const FQuat& Q) {
    return FVector{};
}

void UFLGeneral::PutActorInPersistentLevel(AActor* Actor) {
}

float UFLGeneral::PointPlaneDist(const FVector& Point, const FVector& PlaneBase, const FVector& PlaneNormal) {
    return 0.0f;
}

float UFLGeneral::PointBoxDist(const FVector& Point, const FVector& BoxOrigin, const FVector& BoxExtend, const FRotator& BoxRotation) {
    return 0.0f;
}

float UFLGeneral::PointActorDist(const FVector& Point, const AActor* Actor, bool bOnlyCollidingComponents, bool bIncludeFromChildActors) {
    return 0.0f;
}

int32 UFLGeneral::Negate_Int(const int32 Value) {
    return 0;
}

float UFLGeneral::Negate_Float(const float Value) {
    return 0.0f;
}

int32 UFLGeneral::MinMaxInt_Random(const FMinMaxInt Value) {
    return 0;
}

bool UFLGeneral::MinMaxInt_IsZero(const FMinMaxInt Value) {
    return false;
}

float UFLGeneral::MinMaxFloat_Random(const FMinMaxFloat Value) {
    return 0.0f;
}

bool UFLGeneral::MinMaxFloat_IsZero(const FMinMaxFloat Value) {
    return false;
}

bool UFLGeneral::MinMaxFloat_Include(const FMinMaxFloat Range, const float Value) {
    return false;
}

FVector2D UFLGeneral::MapRangeUnclamped(const FVector2D Value, const FVector2D InRangeA, const FVector2D InRangeB, const FVector2D OutRangeA, const FVector2D OutRangeB) {
    return FVector2D{};
}

FVector2D UFLGeneral::MapRangeClamped(const FVector2D Value, const FVector2D InRangeA, const FVector2D InRangeB, const FVector2D OutRangeA, const FVector2D OutRangeB) {
    return FVector2D{};
}

void UFLGeneral::KillActorWithChildren(AActor* Actor) {
}

void UFLGeneral::KillActorsByClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorsClass, bool bWithChildren) {
}

void UFLGeneral::KillActor(AActor* Actor) {
}

bool UFLGeneral::IsInBounds(const FVector& Point, const FTransform& BoxWorldTransform, const FVector& BoxExtent, const bool bIgnoreZ) {
    return false;
}

bool UFLGeneral::IsComponentBoundsIntersect(const UPrimitiveComponent* ComponentA, const UPrimitiveComponent* ComponentB) {
    return false;
}

void UFLGeneral::HideSubtitles(const UObject* WorldContextObject) {
}

bool UFLGeneral::HasCommandLineParameter(const FString& ParameterName) {
    return false;
}

void UFLGeneral::GetTimeStringFromSeconds(const int32 TotalSeconds, const bool bNoSeconds, FString& String) {
}

void UFLGeneral::GetTimeSpentString(int32 TotalMinutes, FString& String) {
}

FName UFLGeneral::GetStreamingLevelNameFromActor(const AActor* Actor) {
    return NAME_None;
}

float UFLGeneral::GetSignedAngle(FVector Normal, FVector v1, FVector v2) {
    return 0.0f;
}

FString UFLGeneral::GetShortTimeStringFromSeconds(const int32 TotalSeconds) {
    return TEXT("");
}

void UFLGeneral::GetPureActorBounds(const AActor* Actor, bool bOnlyCollidingComponents, FVector& BoxOrigin, FVector& BoxExtend, bool bIncludeFromChildActors) {
}

FVector UFLGeneral::GetPointsBoxSize(const TArray<FVector> Points) {
    return FVector{};
}

UClass* UFLGeneral::GetParentClass(UClass* Class) {
    return NULL;
}

UClass* UFLGeneral::GetObjectParentClass(UObject* Object) {
    return NULL;
}

FString UFLGeneral::GetNumberAsCharacter(const int32 Num, const bool Uppercase) {
    return TEXT("");
}

APlayerController* UFLGeneral::GetFirstPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

void UFLGeneral::GetDateTimeString(FDateTime DateTime, FString& String) {
}

UWorld* UFLGeneral::GetCurrentWorld() {
    return NULL;
}

FString UFLGeneral::GetCommandLineParameterValue(const FString& ParameterName) {
    return TEXT("");
}

FTransform UFLGeneral::GetBoneTransformFromMontage(const UAnimMontage* Montage, FName BoneName, float Time, int32 SlotAnimTrackIndex, int32 AnimationSegmentIndex) {
    return FTransform{};
}

float UFLGeneral::FindDistanceAlongSplineClosestToLocation(const USplineComponent* Spline, const FVector& Location) {
    return 0.0f;
}

void UFLGeneral::DestroyActorDynamicData(AActor* Actor, const bool bDetachHolstered, const bool bKillActor) {
}

bool UFLGeneral::CheckDistanceExceed(const FVector& FromPoint, const TArray<FVector>& ToLocations, const float DistanceSquared) {
    return false;
}

FVector UFLGeneral::CalcLocalBounds(USceneComponent* Component) {
    return FVector{};
}

UActorComponent* UFLGeneral::AddComponentToActor(AActor* BaseActor, TSubclassOf<UActorComponent> AttachedComponent) {
    return NULL;
}


