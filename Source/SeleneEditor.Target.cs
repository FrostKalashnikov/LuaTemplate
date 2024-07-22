// Copyright Studio Dark Way, all rights reserved 

using UnrealBuildTool;
using System.Collections.Generic;

public class SeleneEditorTarget : TargetRules
{
	public SeleneEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "Selene" } );
	}
}
