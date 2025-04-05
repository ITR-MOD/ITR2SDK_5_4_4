#pragma once
#include "CoreMinimal.h"
#include "RadiusWorldSubsystem.h"
#include "RadiusTickableWorldSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class URadiusTickableWorldSubsystem : public URadiusWorldSubsystem {
    GENERATED_BODY()
public:
    URadiusTickableWorldSubsystem();

};

