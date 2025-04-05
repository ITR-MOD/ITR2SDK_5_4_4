#include "RadiusPlayerController.h"
#include "Templates/SubclassOf.h"

ARadiusPlayerController::ARadiusPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CheatComponent = NULL;
}

void ARadiusPlayerController::Server_TravelTo_Implementation(const FGameplayTag LevelTag) {
}

void ARadiusPlayerController::Server_NotifyClientCharacterInitialized_Implementation(ARadiusPlayerCharacterGameplay* PlayerCharacter, const bool bIsLeftHanded) {
}

void ARadiusPlayerController::Server_ChangeMoney_Implementation(int32 DeltaMoney, const FString& AnalyticsString, EMoneyChangeReason MoneyChangeReason) {
}

void ARadiusPlayerController::Server_ApplyPointDamage_Implementation(AActor* Target, const float Damage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
}

void ARadiusPlayerController::Server_ApplyDamage_Implementation(AActor* DamagedActor, const float Damage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
}

void ARadiusPlayerController::OnPostPossess_Implementation(APawn* P) {
}


