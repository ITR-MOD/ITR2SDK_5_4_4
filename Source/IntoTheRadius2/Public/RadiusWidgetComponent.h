#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "OnWidgetInitializedDelegate.h"
#include "RadiusWidgetComponent.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWhileIngameMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWhileDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableForOtherPlayers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetInitialized OnWidgetInitialized;
    
    URadiusWidgetComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPossessedPawn(APawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(APawn* PlayerPawn, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnIngameMenuOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnIngameMenuClosed();
    
};

