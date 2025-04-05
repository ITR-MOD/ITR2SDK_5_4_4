#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AlsCameraConstants.generated.h"

UCLASS(Blueprintable)
class ALSCAMERA_API UAlsCameraConstants : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAlsCameraConstants();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TraceOverrideCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName RotationLagCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PivotOffsetZCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PivotOffsetYCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PivotOffsetXCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LocationLagZCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LocationLagYCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LocationLagXCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FirstPersonOverrideCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CameraTracesDebugDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CameraShapesDebugDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CameraOffsetZCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CameraOffsetYCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CameraOffsetXCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CameraCurvesDebugDisplayName();
    
};

