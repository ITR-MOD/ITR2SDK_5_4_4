#include "RadiusAIControllerBase.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AggroComponent.h"
#include "RadiusAIPerceptionComponent.h"
#include "RadiusHTNComponent.h"
#include "Templates/SubclassOf.h"

ARadiusAIControllerBase::ARadiusAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Blackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    this->BlackboardComponent = NULL;
    this->HTNComponent = CreateDefaultSubobject<URadiusHTNComponent>(TEXT("HTNComponent"));
    this->AIPerceptionComponent = CreateDefaultSubobject<URadiusAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    this->AggroComponent = CreateDefaultSubobject<UAggroComponent>(TEXT("AggroComponent"));
    this->AIPerceptionSystem = NULL;
    this->GameConfigSubsystem = NULL;
    this->NPCConfig = NULL;
}

void ARadiusAIControllerBase::UpdatePriorityTarget() {
}

void ARadiusAIControllerBase::SetNPCState(ENPCState InNPCState) {
}

void ARadiusAIControllerBase::SetNpcDead() {
}

void ARadiusAIControllerBase::Server_ApplyPointDamage_Implementation(AActor* Target, const float Damage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
}

void ARadiusAIControllerBase::OnVisibleNpcDeath(const AController* DeathInstigator, const AActor* DiedNPC) {
}

void ARadiusAIControllerBase::OnTargetEndPlay(AActor* Target, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ARadiusAIControllerBase::OnTargetDeath(AActor* Target) {
}

void ARadiusAIControllerBase::OnPerceptionUpdated(AActor* Target, FAIStimulus Stimulus) {
}

void ARadiusAIControllerBase::OnAggroReductionStarted() {
}

FVector ARadiusAIControllerBase::GetShootLocation() const {
    return FVector{};
}

ENPCState ARadiusAIControllerBase::GetNPCState() const {
    return ENPCState::None;
}


