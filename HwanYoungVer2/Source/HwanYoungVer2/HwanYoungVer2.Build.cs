// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HwanYoungVer2 : ModuleRules
{
	public HwanYoungVer2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay"});
		PrivateDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "GameplayTags", "GameplayTasks" });
	}
}
