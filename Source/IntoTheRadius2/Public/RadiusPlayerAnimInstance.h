#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RadiusPlayerAnimInstance.generated.h"

class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class INTOTHERADIUS2_API URadiusPlayerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* HMDTransformObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyRotationOffset;
    
    URadiusPlayerAnimInstance();

};

