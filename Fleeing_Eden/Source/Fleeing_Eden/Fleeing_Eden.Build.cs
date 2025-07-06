// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Fleeing_Eden : ModuleRules
{
	public Fleeing_Eden(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Fleeing_Eden",
			"Fleeing_Eden/Variant_Platforming",
			"Fleeing_Eden/Variant_Combat",
			"Fleeing_Eden/Variant_Combat/AI",
			"Fleeing_Eden/Variant_SideScrolling",
			"Fleeing_Eden/Variant_SideScrolling/Gameplay",
			"Fleeing_Eden/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
