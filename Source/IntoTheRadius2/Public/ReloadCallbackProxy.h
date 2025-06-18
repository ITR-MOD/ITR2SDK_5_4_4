#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnReloadCompleteDelegate.h"
#include "ReloadCallbackProxy.generated.h"

class UReloadCallbackProxy;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UReloadCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReloadComplete OnReloadComplete;
    
    UReloadCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UReloadCallbackProxy* CreateReloadCallbackProxy(UObject* WorldContextObject);
    
};

