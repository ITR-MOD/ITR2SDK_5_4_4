#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "PlayerGripConstraintComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UPlayerGripConstraintComponent : public UPhysicsConstraintComponent {
    GENERATED_BODY()
public:
    UPlayerGripConstraintComponent(const FObjectInitializer& ObjectInitializer);

};

