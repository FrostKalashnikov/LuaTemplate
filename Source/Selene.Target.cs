// Copyright Studio Dark Way, all rights reserved 

using UnrealBuildTool;
using System.Collections.Generic;

public class SeleneTarget : TargetRules
{
	public SeleneTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "Selene" } );
	}
}
