#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RadiusInitializeComponentInterface.h"
#include "RadiusInitializeComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusInitializeComponent : public UActorComponent, public IRadiusInitializeComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> WaitedContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
public:
    URadiusInitializeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectInitialized(UObject* Object);
    

    // Fix for true pure virtual functions not being implemented
};

