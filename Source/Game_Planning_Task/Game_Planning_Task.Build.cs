// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Game_Planning_Task : ModuleRules
{
	public Game_Planning_Task(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
