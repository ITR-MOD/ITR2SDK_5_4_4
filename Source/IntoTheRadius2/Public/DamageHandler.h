#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DamageHandler.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class INTOTHERADIUS2_API UDamageHandler : public UObject {
    GENERATED_BODY()
public:
    UDamageHandler();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDamage(AActor* Actor, float Damage, AController* InstigatedBy, AActor* DamageCauser);
    
};

