#pragma once
#include "CoreMinimal.h"
#include "OnPathChangedDelegate.generated.h"

class UAtlasPathFollowingComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPathChanged, UAtlasPathFollowingComponent*, Path);

