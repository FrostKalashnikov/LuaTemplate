// Copyright 2024 Michel Brito.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VrPrintString_Settings.generated.h"

UCLASS(config = MySetting)
class VRPRINTSTRING_API UVrPrintString_Settings : public UObject
{
	GENERATED_BODY()
	
public:
	UVrPrintString_Settings(const FObjectInitializer& obj);
	
	//Size of the area where prints will be displayed
	UPROPERTY(Config, EditAnywhere, Category = "Settings")
	FVector2D HUD_Size;

	UPROPERTY(Config, EditAnywhere, Category = "Settings")
	FSlateFontInfo FontInfo;
	
};
