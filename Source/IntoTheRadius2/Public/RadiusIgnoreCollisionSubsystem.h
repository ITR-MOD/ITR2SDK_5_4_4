#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActorsArray.h"
#include "IgnoreCollisionJob.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusIgnoreCollisionSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusIgnoreCollisionSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TMap<AActor*, FActorsArray> IgnoresCache;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FIgnoreCollisionJob> IgnoreCollisionJobs;
    
public:
    URadiusIgnoreCollisionSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateCollisionIgnores(AActor* Actor, AActor* Parent, bool bAttached);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLoadLevel(FGameplayTag LevelTag);

private:
    UFUNCTION(BlueprintCallable)
    void DoIgnoreCollisionJobs();
    
};

