#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VertexColorsArray.generated.h"

USTRUCT(BlueprintType)
struct FVertexColorsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> VertexColors;
    
    INTOTHERADIUS2_API FVertexColorsArray();
};

