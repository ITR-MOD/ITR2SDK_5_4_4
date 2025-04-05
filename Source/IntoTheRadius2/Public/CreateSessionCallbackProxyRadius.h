#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "CreateSessionCallbackProxyRadius.generated.h"

class UCreateSessionCallbackProxyRadius;

UCLASS(Blueprintable, MinimalAPI)
class UCreateSessionCallbackProxyRadius : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UCreateSessionCallbackProxyRadius();

    UFUNCTION(BlueprintCallable)
    static UCreateSessionCallbackProxyRadius* CreateRadiusCoopSession(const FString& GameID, const FString& QuestJoinCode);
    
};

