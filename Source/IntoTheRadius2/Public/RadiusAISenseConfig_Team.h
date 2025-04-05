#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "RadiusAISenseConfig_Team.generated.h"

class UAISense;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class INTOTHERADIUS2_API URadiusAISenseConfig_Team : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense> Implementation;
    
    URadiusAISenseConfig_Team();

};

