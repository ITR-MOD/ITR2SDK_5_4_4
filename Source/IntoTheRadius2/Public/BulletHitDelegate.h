#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "BulletHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBulletHit, const FHitResult&, HitResult);

