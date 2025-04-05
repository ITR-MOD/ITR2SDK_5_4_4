#include "RadiusCheatSubsystem.h"

URadiusCheatSubsystem::URadiusCheatSubsystem() {
}

void URadiusCheatSubsystem::TravelTo(FGameplayTag LevelTag) {
}


void URadiusCheatSubsystem::SwitchNoClip() {
}

void URadiusCheatSubsystem::SpawnStartingGear() {
}

void URadiusCheatSubsystem::SpawnMissionArtefacts() {
}

void URadiusCheatSubsystem::SetTideTime() const {
}

void URadiusCheatSubsystem::SetStartingGear(const FString& ConfigName) const {
}

void URadiusCheatSubsystem::SetSpeedCheatValue(const float Value) {
}

void URadiusCheatSubsystem::SetSpeedCheat(const bool bTurnOn) {
}

void URadiusCheatSubsystem::SetShowPlayerName(const bool bEnable) {
}

void URadiusCheatSubsystem::SetShowControllers(const bool bNewShowControllers) {
}

void URadiusCheatSubsystem::SetNoClip(const bool bTurnOn) {
}

void URadiusCheatSubsystem::SetMagReloadCheat(const bool bEnable) {
}

void URadiusCheatSubsystem::SetJumpAllowed(const bool bTurnOn) {
}

void URadiusCheatSubsystem::SetInvisibleMode(const bool bEnable) {
}

void URadiusCheatSubsystem::SetInfiniteAmmoCheat(const bool bEnable) {
}

void URadiusCheatSubsystem::SetImmortalMode(const bool bEnable) {
}

void URadiusCheatSubsystem::SetGodMode(const bool bEnable) {
}

void URadiusCheatSubsystem::SetAIDebug(const bool bEnable) {
}

void URadiusCheatSubsystem::SetAccessLevel(const int32 AccessLevel) const {
}

void URadiusCheatSubsystem::Server_SpawnItemByTypeTag_Implementation(const FGameplayTag TypeTag, const FTransform SpawnTransform) {
}

void URadiusCheatSubsystem::Server_SpawnActorByClass_Implementation(UClass* InClass, const FTransform SpawnTransform) {
}

void URadiusCheatSubsystem::RegenerateLoot() {
}

bool URadiusCheatSubsystem::IsSpeedCheat() const {
    return false;
}

bool URadiusCheatSubsystem::IsShowPlayerName() const {
    return false;
}

bool URadiusCheatSubsystem::IsMagReloadCheat() const {
    return false;
}

bool URadiusCheatSubsystem::IsJumpAllowed() const {
    return false;
}

bool URadiusCheatSubsystem::IsInvisibleMode() const {
    return false;
}

bool URadiusCheatSubsystem::IsInfiniteAmmoCheat() const {
    return false;
}

bool URadiusCheatSubsystem::IsImmortalMode() const {
    return false;
}

bool URadiusCheatSubsystem::IsGodMode() const {
    return false;
}

FString URadiusCheatSubsystem::GetStartingGearConfig() const {
    return TEXT("");
}

float URadiusCheatSubsystem::GetSpeedCheatValue() const {
    return 0.0f;
}

bool URadiusCheatSubsystem::GetShowControllers() const {
    return false;
}

APawn* URadiusCheatSubsystem::GetOwner() const {
    return NULL;
}

bool URadiusCheatSubsystem::GetNoClip() const {
    return false;
}

bool URadiusCheatSubsystem::GetAIDebug() const {
    return false;
}

void URadiusCheatSubsystem::DestroyAllItemsAndData() {
}

void URadiusCheatSubsystem::CrashGame() {
}

void URadiusCheatSubsystem::AddMoney(const int32 DeltaMoney) const {
}

void URadiusCheatSubsystem::AddAccessPoints(const int32 AccessPoints) const {
}


