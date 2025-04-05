#pragma once
#include "CoreMinimal.h"
#include "RadiusWorldSubsystem.h"
#include "RadiusIngameMenuSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusIngameMenuSubsystem : public URadiusWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* IngameMenu;
    
public:
    URadiusIngameMenuSubsystem();

    UFUNCTION(BlueprintCallable)
    void ToggleIngameMenu();
    
    UFUNCTION(BlueprintCallable)
    void SwitchIngameMenu(const bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInIngameMenu() const;
    
};

