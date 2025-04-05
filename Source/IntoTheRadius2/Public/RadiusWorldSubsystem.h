#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RadiusWorldSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API URadiusWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    URadiusWorldSubsystem();

};

