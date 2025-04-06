using UnrealBuildTool;

public class IntoTheRadius2GameTarget : TargetRules {
	public IntoTheRadius2GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;
		ExtraModuleNames.AddRange(new string[] {
			"IntoTheRadius2",
		});
	}
}
