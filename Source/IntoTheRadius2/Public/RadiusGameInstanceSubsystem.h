#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RadiusGameInstanceSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API URadiusGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URadiusGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShutdown();
    
};

