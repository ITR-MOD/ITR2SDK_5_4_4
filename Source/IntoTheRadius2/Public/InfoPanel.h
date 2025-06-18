#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EInfoPanelState.h"
#include "InfoPanel.generated.h"

class AController;
class APawn;
class UItemInfo;
class URadiusDataComponent;
class URadiusWidgetComponent;
class UUserWidget;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API AInfoPanel : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusWidgetComponent* ItemInfoWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusWidgetComponent* PlayerInfoWidgetComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* OwnerPawn;

protected:
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemInfo* ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PlayerInfo;
    
public:
    AInfoPanel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTransform(const FVector NewLocation, const FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayerInfo();
 
    UFUNCTION(BlueprintCallable)
    void ShowItemInfo(URadiusDataComponent* DataComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EInfoPanelState> GetInfoPanelState();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
};

