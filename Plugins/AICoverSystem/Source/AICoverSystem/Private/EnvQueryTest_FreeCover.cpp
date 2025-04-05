#include "EnvQueryTest_FreeCover.h"

UEnvQueryTest_FreeCover::UEnvQueryTest_FreeCover() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bFreeOnSelfOccupy = true;
}


