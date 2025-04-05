#include "HTNNodeLibrary.h"

UHTNNodeLibrary::UHTNNodeLibrary() {
}

void UHTNNodeLibrary::SetWorldStateValueAsVector(UHTNNode* Node, const FBlackboardKeySelector& Key, FVector Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsString(UHTNNode* Node, const FBlackboardKeySelector& Key, const FString& Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsRotator(UHTNNode* Node, const FBlackboardKeySelector& Key, FRotator Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsObject(UHTNNode* Node, const FBlackboardKeySelector& Key, UObject* Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsName(UHTNNode* Node, const FBlackboardKeySelector& Key, FName Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsInt(UHTNNode* Node, const FBlackboardKeySelector& Key, int32 Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsFloat(UHTNNode* Node, const FBlackboardKeySelector& Key, float Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsEnum(UHTNNode* Node, const FBlackboardKeySelector& Key, uint8 Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsCover(UHTNNode* Node, const FBlackboardKeySelector& Key, FCover Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsClass(UHTNNode* Node, const FBlackboardKeySelector& Key, UClass* Value) {
}

void UHTNNodeLibrary::SetWorldStateValueAsBool(UHTNNode* Node, const FBlackboardKeySelector& Key, bool Value) {
}

void UHTNNodeLibrary::SetWorldStateSelfLocation(UHTNNode* Node, const FVector& NewSelfLocation) {
}

FVector UHTNNodeLibrary::GetWorldStateValueAsVector(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return FVector{};
}

FString UHTNNodeLibrary::GetWorldStateValueAsString(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return TEXT("");
}

FRotator UHTNNodeLibrary::GetWorldStateValueAsRotator(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return FRotator{};
}

UObject* UHTNNodeLibrary::GetWorldStateValueAsObject(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return NULL;
}

FName UHTNNodeLibrary::GetWorldStateValueAsName(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return NAME_None;
}

int32 UHTNNodeLibrary::GetWorldStateValueAsInt(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return 0;
}

float UHTNNodeLibrary::GetWorldStateValueAsFloat(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return 0.0f;
}

uint8 UHTNNodeLibrary::GetWorldStateValueAsEnum(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return 0;
}

FCover UHTNNodeLibrary::GetWorldStateValueAsCover(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return FCover{};
}

UClass* UHTNNodeLibrary::GetWorldStateValueAsClass(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return NULL;
}

bool UHTNNodeLibrary::GetWorldStateValueAsBool(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return false;
}

AActor* UHTNNodeLibrary::GetWorldStateValueAsActor(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return NULL;
}

FVector UHTNNodeLibrary::GetSingleLocationFromHTNLocationSource(EHTNReturnValueValidity& OutResult, const UHTNNode* Node, const FHTNLocationSource& LocationSource) {
    return FVector{};
}

FVector UHTNNodeLibrary::GetSelfLocationFromWorldState(UHTNNode* Node) {
    return FVector{};
}

UWorldStateProxy* UHTNNodeLibrary::GetOwnersWorldState(const UHTNNode* Node) {
    return NULL;
}

void UHTNNodeLibrary::GetMultipleLocationsFromHTNLocationSource(EHTNReturnValueValidity& OutResult, TArray<FVector>& OutLocations, const UHTNNode* Node, const FHTNLocationSource& LocationSource) {
}

bool UHTNNodeLibrary::GetLocationFromWorldState(UHTNNode* Node, const FBlackboardKeySelector& KeySelector, FVector& OutLocation, AActor*& OutActor) {
    return false;
}

bool UHTNNodeLibrary::CopyWorldStateValue(UHTNNode* Node, const FBlackboardKeySelector& SourceKey, const FBlackboardKeySelector& TargetKey) {
    return false;
}

void UHTNNodeLibrary::ClearWorldStateValue(UHTNNode* Node, const FBlackboardKeySelector& Key) {
}


