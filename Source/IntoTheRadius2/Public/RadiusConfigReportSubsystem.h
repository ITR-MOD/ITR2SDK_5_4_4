#pragma once
#include "CoreMinimal.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusConfigReportSubsystem.generated.h"

class UIniManager;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusConfigReportSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIniManager* IniManager;
    
public:
    URadiusConfigReportSubsystem();

    UFUNCTION(BlueprintCallable)
    void WriteData(TMap<FString, FString> Data);
    
};

