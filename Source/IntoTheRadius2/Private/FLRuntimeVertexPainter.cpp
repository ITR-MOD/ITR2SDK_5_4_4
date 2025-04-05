#include "FLRuntimeVertexPainter.h"

UFLRuntimeVertexPainter::UFLRuntimeVertexPainter() {
}

void UFLRuntimeVertexPainter::SkeletalMeshOverrideVertexColors(USkeletalMeshComponent* SkeletalMeshComponent, const int32 LODIndex, TArray<FColor> VertexColors) {
}

TArray<FColor> UFLRuntimeVertexPainter::SkeletalMeshGetVertexColorsInLOD(USkeletalMeshComponent* SkeletalMeshComponent, const int32 LODIndex) {
    return TArray<FColor>();
}

TArray<FVertexColorsArray> UFLRuntimeVertexPainter::SkeletalMeshGetVertexColorsInAllLOD(USkeletalMeshComponent* SkeletalMeshComponent) {
    return TArray<FVertexColorsArray>();
}

void UFLRuntimeVertexPainter::QuickPaintStaticMeshVertexColor(UStaticMeshComponent* StaticMeshComponent, const FVector& Position, const float Radius, const int32 ChannelMask, const FLinearColor Color, const float Opacity, UCurveFloat* Falloff, const bool bPaintInSingleLOD, const int32 LODIndex) {
}

void UFLRuntimeVertexPainter::QuickPaintSkeletalMeshVertexColor(USkeletalMeshComponent* SkeletalMeshComponent, const FVector& Position, const float Radius, const int32 ChannelMask, const FLinearColor Color, const float Opacity, UCurveFloat* Falloff, const bool bPaintInSingleLOD, const int32 LODIndex) {
}

void UFLRuntimeVertexPainter::OverrideVertexColors(UStaticMeshComponent* StaticMeshComponent, const int32 LODIndex, TArray<FColor> VertexColors) {
}

int32 UFLRuntimeVertexPainter::GetVerticesNum(UStaticMeshComponent* StaticMeshComponent, const int32 LODIndex) {
    return 0;
}

TArray<FColor> UFLRuntimeVertexPainter::GetVertexColorsInLOD(UStaticMeshComponent* StaticMeshComponent, const int32 LODIndex) {
    return TArray<FColor>();
}

TArray<FVertexColorsArray> UFLRuntimeVertexPainter::GetVertexColorsInAllLOD(UStaticMeshComponent* StaticMeshComponent) {
    return TArray<FVertexColorsArray>();
}

int32 UFLRuntimeVertexPainter::GetSkeletalMeshVerticesNum(USkeletalMeshComponent* SkeletalMesh, const int32 LODIndex) {
    return 0;
}

void UFLRuntimeVertexPainter::EndPaintVertexColor(const FRVPContext& Context) {
}

void UFLRuntimeVertexPainter::ContextPaintVertexColorInShape(FRVPContext& Context, const FVector Position, const FVector Extent, const FRotator Rotation, const EPaintShape PaintShape, const int32 ChannelMask, FLinearColor Color, float Opacity, UCurveFloat* Falloff, bool bConvertToSRGB) {
}

void UFLRuntimeVertexPainter::ContextPaintAllVerticesColor(FRVPContext& Context, const int32 ChannelMask, const FLinearColor Color, const float Opacity, const bool bConvertToSRGB) {
}

float UFLRuntimeVertexPainter::ContextMinimumVertexColorInShape(FRVPContext& Context, const FVector Position, const FVector Extent, const FRotator Rotation, const EPaintShape PaintShape, const int32 ChannelMask) {
    return 0.0f;
}

float UFLRuntimeVertexPainter::ContextAddVertexColorInShape(FRVPContext& Context, const int32 Value, const FVector Position, const FVector Extent, const FRotator Rotation, const EPaintShape PaintShape, const int32 ChannelMask, const int32 FilterMask, const int32 ThresholdBoundsMin, const int32 ThresholdBoundsMax) {
    return 0.0f;
}

void UFLRuntimeVertexPainter::ContextAddAllVerticesColor(FRVPContext& Context, const int32 Value, const int32 ChannelMask, const int32 FilterMask, const int32 FilterThreshold) {
}

bool UFLRuntimeVertexPainter::BeginPaintVertexColor(UStaticMeshComponent* StaticMeshComponent, FRVPContext& OutContext, const bool bPaintInSingleLOD, const int32 LODIndex) {
    return false;
}

bool UFLRuntimeVertexPainter::BeginPaintSkeletalMeshVertexColor(USkeletalMeshComponent* SkeletalMeshComponent, FRVPContext& OutContext, const bool bPaintInSingleLOD, const int32 LODIndex) {
    return false;
}


