#pragma once
#include "CoreMinimal.h"
#include "RadiusSerializedObject.generated.h"

USTRUCT(BlueprintType)
struct FRadiusSerializedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SerializeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NestedIndex;
    
    INTOTHERADIUS2_API FRadiusSerializedObject();
};

