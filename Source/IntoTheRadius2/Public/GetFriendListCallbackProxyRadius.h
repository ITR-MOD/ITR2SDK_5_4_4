#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGetFriendListCompleteDelegate.h"
#include "GetFriendListCallbackProxyRadius.generated.h"

class UGetFriendListCallbackProxyRadius;

UCLASS(Blueprintable)
class UGetFriendListCallbackProxyRadius : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetFriendListComplete OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetFriendListComplete OnFailure;
    
public:
    UGetFriendListCallbackProxyRadius();

    UFUNCTION(BlueprintCallable)
    static UGetFriendListCallbackProxyRadius* GetRadiusFriendList();
    
};

