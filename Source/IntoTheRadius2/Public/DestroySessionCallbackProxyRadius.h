#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "DestroySessionCallbackProxyRadius.generated.h"

class UDestroySessionCallbackProxyRadius;

UCLASS(Blueprintable, MinimalAPI)
class UDestroySessionCallbackProxyRadius : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFinish;
    
    UDestroySessionCallbackProxyRadius();

    UFUNCTION(BlueprintCallable)
    static UDestroySessionCallbackProxyRadius* DestroyCoopSession();
    
};

