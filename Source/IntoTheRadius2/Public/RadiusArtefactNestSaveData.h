#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RadiusArtefactNestSaveData.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusArtefactNestSaveData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasArtefact;
    
    URadiusArtefactNestSaveData();

};

