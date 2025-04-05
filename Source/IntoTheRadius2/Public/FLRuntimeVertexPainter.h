#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPaintShape.h"
#include "RVPContext.h"
#include "VertexColorsArray.h"
#include "FLRuntimeVertexPainter.generated.h"

class UCurveFloat;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLRuntimeVertexPainter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLRuntimeVertexPainter();

    UFUNCTION(BlueprintCallable)
    static void SkeletalMeshOverrideVertexColors(USkeletalMeshComponent* SkeletalMeshComponent, const int32 LODIndex, TArray<FColor> VertexColors);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FColor> SkeletalMeshGetVertexColorsInLOD(USkeletalMeshComponent* SkeletalMeshComponent, const int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVertexColorsArray> SkeletalMeshGetVertexColorsInAllLOD(USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void QuickPaintStaticMeshVertexColor(UStaticMeshComponent* StaticMeshComponent, const FVector& Position, const float Radius, const int32 ChannelMask, const FLinearColor Color, const float Opacity, UCurveFloat* Falloff, const bool bPaintInSingleLOD, const int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    static void QuickPaintSkeletalMeshVertexColor(USkeletalMeshComponent* SkeletalMeshComponent, const FVector& Position, const float Radius, const int32 ChannelMask, const FLinearColor Color, const float Opacity, UCurveFloat* Falloff, const bool bPaintInSingleLOD, const int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideVertexColors(UStaticMeshComponent* StaticMeshComponent, const int32 LODIndex, TArray<FColor> VertexColors);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetVerticesNum(UStaticMeshComponent* StaticMeshComponent, const int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FColor> GetVertexColorsInLOD(UStaticMeshComponent* StaticMeshComponent, const int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVertexColorsArray> GetVertexColorsInAllLOD(UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSkeletalMeshVerticesNum(USkeletalMeshComponent* SkeletalMesh, const int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    static void EndPaintVertexColor(const FRVPContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static void ContextPaintVertexColorInShape(UPARAM(Ref) FRVPContext& Context, const FVector Position, const FVector Extent, const FRotator Rotation, const EPaintShape PaintShape, const int32 ChannelMask, FLinearColor Color, float Opacity, UCurveFloat* Falloff, bool bConvertToSRGB);
    
    UFUNCTION(BlueprintCallable)
    static void ContextPaintAllVerticesColor(UPARAM(Ref) FRVPContext& Context, const int32 ChannelMask, const FLinearColor Color, const float Opacity, const bool bConvertToSRGB);
    
    UFUNCTION(BlueprintCallable)
    static float ContextMinimumVertexColorInShape(UPARAM(Ref) FRVPContext& Context, const FVector Position, const FVector Extent, const FRotator Rotation, const EPaintShape PaintShape, const int32 ChannelMask);
    
    UFUNCTION(BlueprintCallable)
    static float ContextAddVertexColorInShape(UPARAM(Ref) FRVPContext& Context, const int32 Value, const FVector Position, const FVector Extent, const FRotator Rotation, const EPaintShape PaintShape, const int32 ChannelMask, const int32 FilterMask, const int32 ThresholdBoundsMin, const int32 ThresholdBoundsMax);
    
    UFUNCTION(BlueprintCallable)
    static void ContextAddAllVerticesColor(UPARAM(Ref) FRVPContext& Context, const int32 Value, const int32 ChannelMask, const int32 FilterMask, const int32 FilterThreshold);
    
    UFUNCTION(BlueprintCallable)
    static bool BeginPaintVertexColor(UStaticMeshComponent* StaticMeshComponent, FRVPContext& OutContext, const bool bPaintInSingleLOD, const int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool BeginPaintSkeletalMeshVertexColor(USkeletalMeshComponent* SkeletalMeshComponent, FRVPContext& OutContext, const bool bPaintInSingleLOD, const int32 LODIndex);
    
};

