#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusMagInterface.generated.h"

UINTERFACE(Blueprintable)
class URadiusMagInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusMagInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAmmoSocketName(int32 AmmoIndex, FName& SocketName, bool& HasSocket);
    
};

