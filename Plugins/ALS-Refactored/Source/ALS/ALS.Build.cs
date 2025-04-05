using UnrealBuildTool;

public class ALS : ModuleRules {
    public ALS(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "ControlRig",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "Niagara",
            "PhysicsCore",
            "RigVM",
        });
    }
}
