#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "HTNExtension.h"
#include "HTNExtension_ServicePersistentTickCountdown.generated.h"

class UHTNService;

UCLASS(Blueprintable)
class HTN_API UHTNExtension_ServicePersistentTickCountdown : public UHTNExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UHTNService*, FIntervalCountdown> ServiceToCountdown;
    
public:
    UHTNExtension_ServicePersistentTickCountdown();

};

