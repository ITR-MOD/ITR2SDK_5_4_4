#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RadiusInitializeComponentInterface.h"
#include "RadiusInitializeObject.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusInitializeObject : public UObject, public IRadiusInitializeComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> WaitedContainers;
    
public:
    URadiusInitializeObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectInitialized(UObject* Object);
    

    // Fix for true pure virtual functions not being implemented
};

