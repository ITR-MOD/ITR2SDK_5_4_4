#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RadiusCheatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusCheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URadiusCheatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetAccessLevel(int32 AccessLevel) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChangeGear(const FString& ConfigName) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddMoney(int32 DeltaMoney) const;
    
};

