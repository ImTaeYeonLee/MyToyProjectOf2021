// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TY_Function : ModuleRules
{
	public TY_Function(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
