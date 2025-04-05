#pragma once
#include "CoreMinimal.h"
#include "BlueprintDataDefinitions.h"
#include "OnGetFriendListCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetFriendListComplete, const TArray<FBPFriendInfo>&, FriendList, const FString&, Error);

