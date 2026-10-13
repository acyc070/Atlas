using UnrealBuildTool;

public class AtlasEditorTarget : TargetRules {
	public AtlasEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Atlas",
			"TarsierUtilities",
		});
	}
}
