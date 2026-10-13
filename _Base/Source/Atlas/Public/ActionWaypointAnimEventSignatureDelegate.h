#pragma once
#include "CoreMinimal.h"
#include "ActionWaypointAnimEventSignatureDelegate.generated.h"

class AAtlasDLCNomeAI;
class UAnimationAsset;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActionWaypointAnimEventSignature, AAtlasDLCNomeAI*, Nome, UAnimationAsset*, AnimationAsset);

