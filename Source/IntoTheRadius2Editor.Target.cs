using UnrealBuildTool;

public class IntoTheRadius2EditorTarget : TargetRules {
	public IntoTheRadius2EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V4;
        ExtraModuleNames.AddRange(new string[] {
			"IntoTheRadius2",
		});
	}
}
