using UnrealBuildTool;

public class Atlas : ModuleRules {
    public Atlas(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "ApexDestruction",
            "BIKRig",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
            "SlateCore",
            "TarsierUtilities",
            "UMG",
        });
    }
}
