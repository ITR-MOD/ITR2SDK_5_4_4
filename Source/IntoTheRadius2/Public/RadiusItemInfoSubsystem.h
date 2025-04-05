#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RadiusWorldSubsystem.h"
#include "RadiusItemInfoSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusItemInfoSubsystem : public URadiusWorldSubsystem {
    GENERATED_BODY()
public:
    URadiusItemInfoSubsystem();

    UFUNCTION(BlueprintCallable)
    void ReturnItemInfo(AActor* ItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestItemInfoWidget(bool Force, FTransform RequestedTransform, bool& Accepted, AActor*& ItemInfo);
    
};

