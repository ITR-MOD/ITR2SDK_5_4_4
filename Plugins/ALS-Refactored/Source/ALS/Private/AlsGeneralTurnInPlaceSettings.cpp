#include "AlsGeneralTurnInPlaceSettings.h"

FAlsGeneralTurnInPlaceSettings::FAlsGeneralTurnInPlaceSettings() {
    this->ViewYawAngleThreshold = 0.00f;
    this->ViewYawSpeedThreshold = 0.00f;
    this->Turn180AngleThreshold = 0.00f;
    this->BlendDuration = 0.00f;
    this->bDisableFootLock = false;
    this->StandingTurn90Left = NULL;
    this->StandingTurn90Right = NULL;
    this->StandingTurn180Left = NULL;
    this->StandingTurn180Right = NULL;
    this->CrouchingTurn90Left = NULL;
    this->CrouchingTurn90Right = NULL;
    this->CrouchingTurn180Left = NULL;
    this->CrouchingTurn180Right = NULL;
}

