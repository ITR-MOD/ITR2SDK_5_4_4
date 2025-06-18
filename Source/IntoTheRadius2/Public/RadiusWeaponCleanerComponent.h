#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPaintShape.h"
#include "Templates/SubclassOf.h"
#include "VertexPositions.h"
#include "RadiusWeaponCleanerComponent.generated.h"

class ARadiusItemBase;
class UCurveFloat;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusWeaponCleanerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusItemBase* RadiusItemOwner;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TMap<USkeletalMeshComponent*, FVertexPositions> SkeletalMeshPositions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TMap<UStaticMeshComponent*, FVertexPositions> StaticMeshPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPaintShape PaintShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OilPaintFallOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TagsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> MeshesToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPrimitiveComponent>> ComponentsToIgnore;
    
    URadiusWeaponCleanerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetOilStateNative();
    
    UFUNCTION(BlueprintCallable)
    void ResetCleanStateNative();
    
    UFUNCTION(BlueprintCallable)
    void OilTickNative(const int32 TimerValue, const int32 OilValue);
    
    UFUNCTION(BlueprintCallable)
    bool OilPaintNative(const FVector& Location, const FVector& Extent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARadiusItemBase* GetRadiusItemOwner() const;
    
    UFUNCTION(BlueprintCallable)
    float CleanNative(const FVector& Location, const FVector& Extent);
    
};

