using UnrealBuildTool;

public class ALSExtras : ModuleRules {
    public ALSExtras(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "ALS",
            "ALSCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
        });
    }
}
