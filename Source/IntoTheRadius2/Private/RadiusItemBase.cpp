#include "RadiusItemBase.h"
#include "Net/UnrealNetwork.h"
#include "RadiusDataComponent.h"

ARadiusItemBase::ARadiusItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataComponent = CreateDefaultSubobject<URadiusDataComponent>(TEXT("Data Component"));
    this->GripControllerPrimary = NULL;
    this->GripControllerSecondary = NULL;
    this->GS_LerptToHand = NULL;
    this->InitializeComponent = NULL;
}

void ARadiusItemBase::Server_ChangeItemDurability_Implementation(const float DeltaDurability) {
}

void ARadiusItemBase::RetryPlaceContainer() {
}

//void ARadiusItemBase::PostInitializeComponents()
//{
//    Super::PostInitializeComponents(); 
//}

void ARadiusItemBase::OnReplicatorCreated_Implementation() {
}

void ARadiusItemBase::OnParenIDReplicated() {
}

void ARadiusItemBase::OnDataUnlinking_Implementation(URadiusItemDynamicData* PreviousData) {
}

void ARadiusItemBase::OnDataLinked_Implementation() {
}


void ARadiusItemBase::CreateDynamicData() {
}

void ARadiusItemBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARadiusItemBase, ItemConfiguration);
}


