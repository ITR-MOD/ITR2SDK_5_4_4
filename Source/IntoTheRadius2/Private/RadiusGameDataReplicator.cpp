#include "RadiusGameDataReplicator.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ARadiusGameDataReplicator::ARadiusGameDataReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->GameTicks = 0;
    this->LastTideTicks = 0;
    this->AccessLevel = 0;
    this->AccessLvlPoints = 0;
    this->NewItemLabelCounters.AddDefaulted(6);
    this->Money = 0;
    this->Ashes = 0;
}

void ARadiusGameDataReplicator::UpdateNewItemLabelCounters(int32 NewAccessLevel) {
}

bool ARadiusGameDataReplicator::SetGlobalTrigger(FGameplayTag Trigger, bool bSet) {
    return false;
}

void ARadiusGameDataReplicator::SetAccessLvlPoints(int32 NewAccessPoints) {
}

void ARadiusGameDataReplicator::SetAccessLevel(int32 NewLevel) {
}

void ARadiusGameDataReplicator::PrintReplicatorData() const {
}

void ARadiusGameDataReplicator::PrintItemDynamicData() const {
}

void ARadiusGameDataReplicator::PrepareReplicatorForTravel(FGameplayTag LevelTag) {
}

void ARadiusGameDataReplicator::OnRep_Money(int32 OldMoney) {
}

void ARadiusGameDataReplicator::OnRep_LastTideTicks() {
}

void ARadiusGameDataReplicator::OnRep_GlobalTriggers() {
}

void ARadiusGameDataReplicator::OnRep_GameTicks() {
}

void ARadiusGameDataReplicator::OnRep_AvailableMissionList() {
}

void ARadiusGameDataReplicator::OnRep_Ashes() {
}

void ARadiusGameDataReplicator::OnRep_AccessLvlPoints() {
}

void ARadiusGameDataReplicator::OnRep_AccessLevel() {
}

TArray<URadiusItemDynamicData*> ARadiusGameDataReplicator::GetItemDynamicDatasByTypeId(FGameplayTag ItemType) const {
    return TArray<URadiusItemDynamicData*>();
}

URadiusItemDynamicData* ARadiusGameDataReplicator::GetItemDynamicDataByUid(const FString& ItemUid) const {
    return NULL;
}

TMap<FGameplayTag, FGameplayTag> ARadiusGameDataReplicator::GetDifficultySettings() const {
    return TMap<FGameplayTag, FGameplayTag>();
}

TArray<URadiusItemDynamicData*> ARadiusGameDataReplicator::GetChildItemsOfContainerUid(const FString& ContainerUid, const bool bIncludeChildren) {
    return TArray<URadiusItemDynamicData*>();
}

TArray<URadiusItemDynamicData*> ARadiusGameDataReplicator::GetAllReplicatedDynamicDatas() {
    return TArray<URadiusItemDynamicData*>();
}

int32 ARadiusGameDataReplicator::GetAccessLevelPoints() const {
    return 0;
}

int32 ARadiusGameDataReplicator::GetAccessLevel() const {
    return 0;
}

void ARadiusGameDataReplicator::DecreaseNewItemLabelCounters() {
}

bool ARadiusGameDataReplicator::CheckGlobalTrigger(FGameplayTag Trigger) const {
    return false;
}

void ARadiusGameDataReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARadiusGameDataReplicator, GameTicks);
    DOREPLIFETIME(ARadiusGameDataReplicator, LastTideTicks);
    DOREPLIFETIME(ARadiusGameDataReplicator, AccessLevel);
    DOREPLIFETIME(ARadiusGameDataReplicator, AccessLvlPoints);
    DOREPLIFETIME(ARadiusGameDataReplicator, NewItemLabelCounters);
    DOREPLIFETIME(ARadiusGameDataReplicator, GlobalTriggers);
    DOREPLIFETIME(ARadiusGameDataReplicator, ItemDynamicDatas);
    DOREPLIFETIME(ARadiusGameDataReplicator, AvailableMissionList);
    DOREPLIFETIME(ARadiusGameDataReplicator, ObjectiveList);
    DOREPLIFETIME(ARadiusGameDataReplicator, Money);
    DOREPLIFETIME(ARadiusGameDataReplicator, Ashes);
    DOREPLIFETIME(ARadiusGameDataReplicator, DifficultySettings);
}


