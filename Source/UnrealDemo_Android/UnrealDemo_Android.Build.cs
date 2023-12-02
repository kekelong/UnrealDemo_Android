// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealDemo_Android : ModuleRules
{
	public UnrealDemo_Android(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
