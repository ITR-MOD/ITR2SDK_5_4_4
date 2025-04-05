using UnrealBuildTool;

public class ALSCamera : ModuleRules {
    public ALSCamera(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ALS",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
        });
    }
}
