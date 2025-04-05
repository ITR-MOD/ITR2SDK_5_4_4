#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "QuestEntitlementFinishedDelegateDelegate.h"
#include "CheckQuestEntitlementCallbackProxy.generated.h"

class UCheckQuestEntitlementCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UCheckQuestEntitlementCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestEntitlementFinishedDelegate OnFinished;
    
    UCheckQuestEntitlementCallbackProxy();

    UFUNCTION(BlueprintCallable)
    static UCheckQuestEntitlementCallbackProxy* CheckQuestEntitlement();
    
};

