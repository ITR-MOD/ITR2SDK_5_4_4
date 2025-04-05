#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RadiusPooledObjectInterface.h"
#include "RadiusShellInterface.h"
#include "RadiusShell.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusShell : public AActor, public IRadiusShellInterface, public IRadiusPooledObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShellMeshComponent;
    
    ARadiusShell(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPushToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPopFromPool(const FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExcludedFromPool();
    

    // Fix for true pure virtual functions not being implemented
};

