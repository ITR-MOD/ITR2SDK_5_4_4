#include "RadiusCoopSubsystem.h"

URadiusCoopSubsystem::URadiusCoopSubsystem() {
}

EBlueprintResultSwitch URadiusCoopSubsystem::SendInvite(FBPFriendInfo FriendInfo) {
    return EBlueprintResultSwitch::OnSuccess;
}

bool URadiusCoopSubsystem::FindGameByCode(TArray<FBlueprintSessionResult> SearchResults, const FString& JoinCode, FBlueprintSessionResult& FoundedResult) {
    return false;
}


