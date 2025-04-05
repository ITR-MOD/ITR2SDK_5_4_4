#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ItemConfiguration.h"
#include "Templates/SubclassOf.h"
#include "FLSpawn.generated.h"

class AActor;
class UActorComponent;
class UObject;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLSpawn : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLSpawn();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnPooledActor(const UObject* WorldContextObject, const TSoftClassPtr<AActor> ActorClass, const FTransform Transform, const FItemConfiguration ItemConfiguration, const bool bCreateDynamicData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnMonster(const UObject* WorldContextObject, const FGameplayTag TypeTag, const FTransform& Transform, AActor* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnItemFromInventory(UObject* WorldContextObject, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnItemByTypeTag(const UObject* WorldContextObject, const FGameplayTag TypeTag, const FTransform& Transform, const FItemConfiguration& ItemConfiguration, const bool bCreateDynamicData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnDeferredActor(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass, const FTransform Transform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnAnomaly(const UObject* WorldContextObject, const FGameplayTag TypeTag, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTransform ProjectTransformOnGround(const UObject* WorldContextObject, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector ProjectPointOnGround(const UObject* WorldContextObject, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void FinishSpawning(AActor* Actor, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* BP_DuplicateComponent(UActorComponent* OriginalComponent, AActor* NewOwner, bool bManualAttachment, const FTransform& RelativeTransform);
    
};

