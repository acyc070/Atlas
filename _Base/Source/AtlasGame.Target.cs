using UnrealBuildTool;

public class AtlasGameTarget : TargetRules {
	public AtlasGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Atlas",
			"TarsierUtilities",
		});
	}
}
