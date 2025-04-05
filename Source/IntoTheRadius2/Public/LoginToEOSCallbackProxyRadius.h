#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EOSLoginFinishedDelegateDelegate.h"
#include "LoginToEOSCallbackProxyRadius.generated.h"

class ULoginToEOSCallbackProxyRadius;

UCLASS(Blueprintable, MinimalAPI)
class ULoginToEOSCallbackProxyRadius : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSLoginFinishedDelegate OnFinish;
    
    ULoginToEOSCallbackProxyRadius();

    UFUNCTION(BlueprintCallable)
    static ULoginToEOSCallbackProxyRadius* LoginToEOS();
    
};

