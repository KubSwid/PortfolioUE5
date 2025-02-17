// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ExceptSpace : ModuleRules
{
	public ExceptSpace(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
