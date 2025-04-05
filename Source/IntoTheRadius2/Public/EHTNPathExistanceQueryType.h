#pragma once
#include "CoreMinimal.h"
#include "EHTNPathExistanceQueryType.generated.h"

UENUM(BlueprintType)
namespace EHTNPathExistanceQueryType {
    enum Type {
        NavmeshRaycast2D,
        HierarchicalQuery,
        RegularPathFinding,
    };
}

