#include "AlsPoseState.h"

FAlsPoseState::FAlsPoseState() {
    this->GroundedAmount = 0.00f;
    this->InAirAmount = 0.00f;
    this->StandingAmount = 0.00f;
    this->CrouchingAmount = 0.00f;
    this->MovingAmount = 0.00f;
    this->GaitAmount = 0.00f;
    this->GaitWalkingAmount = 0.00f;
    this->GaitRunningAmount = 0.00f;
    this->GaitSprintingAmount = 0.00f;
    this->UnweightedGaitAmount = 0.00f;
    this->UnweightedGaitWalkingAmount = 0.00f;
    this->UnweightedGaitRunningAmount = 0.00f;
    this->UnweightedGaitSprintingAmount = 0.00f;
}

