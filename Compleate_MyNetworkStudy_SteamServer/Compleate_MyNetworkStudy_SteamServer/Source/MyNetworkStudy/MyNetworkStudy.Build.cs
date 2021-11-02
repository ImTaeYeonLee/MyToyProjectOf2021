// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyNetworkStudy : ModuleRules
{
	public MyNetworkStudy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "OnlineSubsystem", "OnlineSubsystemUtils", "Voice" }); // AudioCapture 사용하기 위해 "OnlineSubsystem", "OnlineSubsystemUtils", "Voice" 추가
	}
}
