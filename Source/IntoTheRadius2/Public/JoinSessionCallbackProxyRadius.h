#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "JoinSessionCallbackProxyRadius.generated.h"

class UJoinSessionCallbackProxyRadius;

UCLASS(Blueprintable, MinimalAPI)
class UJoinSessionCallbackProxyRadius : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UJoinSessionCallbackProxyRadius();

    UFUNCTION(BlueprintCallable)
    static UJoinSessionCallbackProxyRadius* JoinRadiusGame(const FBlueprintSessionResult& SessionInfo, bool bShowLoadingScreen);
    
};

