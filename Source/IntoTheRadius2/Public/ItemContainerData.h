#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ERadiusItemContainerType.h"
#include "OnContainerAncestorChanged_ContainerMulticastDelegateDelegate.h"
#include "OnContainerChildrenChanged_ContainerMulticastDelegateDelegate.h"
#include "OnContainerParentChanged_ContainerMulticastDelegateDelegate.h"
#include "ItemContainerData.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UItemContainerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERadiusItemContainerType ContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstanceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParentInstanceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ParentContainerRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ContainerObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContainerParentChanged_ContainerMulticastDelegate OnParentChangedDelegate;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FOnContainerAncestorChanged_ContainerMulticastDelegate OnAncestorChangedDelegate;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContainerChildrenChanged_ContainerMulticastDelegate OnChildrenChangedDelegate;
    
    UItemContainerData();

};

