#include "WorldStateProxy.h"

UWorldStateProxy::UWorldStateProxy() {
    this->bIsEditable = true;
}

void UWorldStateProxy::SetValueAsVector(const FName& KeyName, FVector Value) {
}

void UWorldStateProxy::SetValueAsString(const FName& KeyName, const FString& Value) {
}

void UWorldStateProxy::SetValueAsRotator(const FName& KeyName, FRotator Value) {
}

void UWorldStateProxy::SetValueAsObject(const FName& KeyName, UObject* Value) {
}

void UWorldStateProxy::SetValueAsName(const FName& KeyName, FName Value) {
}

void UWorldStateProxy::SetValueAsInt(const FName& KeyName, int32 Value) {
}

void UWorldStateProxy::SetValueAsFloat(const FName& KeyName, float Value) {
}

void UWorldStateProxy::SetValueAsEnum(const FName& KeyName, uint8 Value) {
}

void UWorldStateProxy::SetValueAsClass(const FName& KeyName, UClass* Value) {
}

void UWorldStateProxy::SetValueAsBool(const FName& KeyName, bool Value) {
}

void UWorldStateProxy::SetSelfLocation(const FVector& NewSelfLocation) {
}

bool UWorldStateProxy::IsVectorValueSet(const FName& KeyName) const {
    return false;
}

FVector UWorldStateProxy::GetValueAsVector(const FName& KeyName) const {
    return FVector{};
}

FString UWorldStateProxy::GetValueAsString(const FName& KeyName) const {
    return TEXT("");
}

FRotator UWorldStateProxy::GetValueAsRotator(const FName& KeyName) const {
    return FRotator{};
}

UObject* UWorldStateProxy::GetValueAsObject(const FName& KeyName) const {
    return NULL;
}

FName UWorldStateProxy::GetValueAsName(const FName& KeyName) const {
    return NAME_None;
}

int32 UWorldStateProxy::GetValueAsInt(const FName& KeyName) const {
    return 0;
}

float UWorldStateProxy::GetValueAsFloat(const FName& KeyName) const {
    return 0.0f;
}

uint8 UWorldStateProxy::GetValueAsEnum(const FName& KeyName) const {
    return 0;
}

UClass* UWorldStateProxy::GetValueAsClass(const FName& KeyName) const {
    return NULL;
}

bool UWorldStateProxy::GetValueAsBool(const FName& KeyName) const {
    return false;
}

AActor* UWorldStateProxy::GetValueAsActor(const FName& KeyName) const {
    return NULL;
}

FVector UWorldStateProxy::GetSelfLocation() const {
    return FVector{};
}

bool UWorldStateProxy::GetRotationFromEntry(const FName& KeyName, FRotator& ResultRotation) const {
    return false;
}

UHTNComponent* UWorldStateProxy::GetOwner() const {
    return NULL;
}

bool UWorldStateProxy::GetLocationFromEntry(const FName& KeyName, FVector& ResultLocation) const {
    return false;
}

bool UWorldStateProxy::GetLocation(const FBlackboardKeySelector& KeySelector, FVector& OutLocation, AActor*& OutActor) const {
    return false;
}

bool UWorldStateProxy::CopyKeyValue(const FName& SourceKeyName, const FName& TargetKeyName) {
    return false;
}

void UWorldStateProxy::ClearValue(const FName& KeyName) {
}


