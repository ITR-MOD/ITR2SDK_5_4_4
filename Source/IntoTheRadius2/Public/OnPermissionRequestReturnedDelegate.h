#pragma once
#include "CoreMinimal.h"
#include "OnPermissionRequestReturnedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPermissionRequestReturned, const TArray<FString>&, Permissions, const TArray<bool>&, GrantResults);

