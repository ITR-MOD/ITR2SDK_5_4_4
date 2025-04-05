#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "FindSessionsCallbackProxyRadius.generated.h"

class UFindSessionsCallbackProxyRadius;

UCLASS(Blueprintable, MinimalAPI)
class UFindSessionsCallbackProxyRadius : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnFailure;
    
    UFindSessionsCallbackProxyRadius();

    UFUNCTION(BlueprintCallable)
    static UFindSessionsCallbackProxyRadius* FindCoopSessions();
    
};

