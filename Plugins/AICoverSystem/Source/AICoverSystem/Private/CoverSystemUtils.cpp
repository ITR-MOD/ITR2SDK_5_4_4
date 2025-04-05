#include "CoverSystemUtils.h"

UCoverSystemUtils::UCoverSystemUtils() {
}

void UCoverSystemUtils::SetBlackboardValueAsCover(UBlackboardComponent* BlackboardComp, const FBlackboardKeySelector& Key, FCover Value) {
}

bool UCoverSystemUtils::IsCoverValid(const FCover& Cover) {
    return false;
}

bool UCoverSystemUtils::IsCoverHandleValid(const FCoverHandle& Handle) {
    return false;
}

FCover UCoverSystemUtils::GetBlackboardValueAsCover(UBlackboardComponent* BlackboardComp, const FBlackboardKeySelector& Key) {
    return FCover{};
}


