#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorsPoolArray.h"
#include "ItemConfiguration.h"
#include "RadiusGameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "RadiusPoolSubsystem.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusPoolSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TMap<FString, FActorsPoolArray> Pool;
    
public:
    URadiusPoolSubsystem();

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReturnActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void PrintPools();
    
    UFUNCTION(BlueprintCallable)
    bool IsActorInPool(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPooledActor(const TSubclassOf<AActor> ActorClass, const FTransform Transform, AActor* Owner, APawn* Instigator, FItemConfiguration ItemConfiguration);
    
};

