#include "EnvQueryTest_BestTop.h"

UEnvQueryTest_BestTop::UEnvQueryTest_BestTop() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->MaxItems = 5;
}


