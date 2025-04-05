#include "HTNDecorator_DoesPathExist.h"

UHTNDecorator_DoesPathExist::UHTNDecorator_DoesPathExist() {
    this->NodeName = TEXT("DoesPathExist");
    this->bUseSelf = false;
    this->PathQueryType = EHTNPathExistanceQueryType::NavmeshRaycast2D;
    this->FilterClass = NULL;
}


