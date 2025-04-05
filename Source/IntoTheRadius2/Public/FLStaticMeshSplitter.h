#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FLStaticMeshSplitter.generated.h"

class AActor;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLStaticMeshSplitter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLStaticMeshSplitter();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> SplitStaticMeshByMaterial(AActor* InputActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetLodScreenSize(UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, float ScreenSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightMapResolution(UStaticMeshComponent* StaticMeshComponent, int32 Resolution);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightmapCoordinateIndex(UStaticMesh* StaticMesh, int32 CoordinateIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCustomDataInTexCoord(UStaticMeshComponent* StaticMeshComponent, int32 TextureCoordIndex, FVector2D CustomData);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCollisionFromLodSections(UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D PackTintAndTextureIndex(FLinearColor Tint, int32 TextureIndex);
    
    UFUNCTION(BlueprintCallable)
    static void CreateEmptyLod(UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void CreateCopyOfExistingLod(UStaticMeshComponent* StaticMeshComponent, int32 SourceLodIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BuildStaticMesh(UStaticMesh* StaticMesh);
    
};

