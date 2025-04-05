using UnrealBuildTool;

public class IntoTheRadius2 : ModuleRules {
    public IntoTheRadius2(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "ALS",
            "AdvancedSessions",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "GeometryFramework",
            "HTN",
            "InputCore",
            "LevelSequence",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "OpenXRExpansionPlugin",
            "PhysicsCore",
            "Sentry",
            "SlateCore",
            "UMG",
            "UniversalVoiceChatPro",
            "VRExpansionPlugin",
            "XRBase",
        });
    }
}
