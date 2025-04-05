#pragma once
#include "CoreMinimal.h"
#include "RandomSounds.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FRandomSounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> Sounds;
    
    FRandomSounds();
};

