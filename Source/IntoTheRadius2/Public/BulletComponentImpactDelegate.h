#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "BulletComponentImpactDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FBulletComponentImpact, const FHitResult&, Hit, const float, ShotDistance, const bool, IsCritical, const bool, IsArmor);

