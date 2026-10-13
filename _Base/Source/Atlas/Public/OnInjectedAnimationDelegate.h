#pragma once
#include "CoreMinimal.h"
#include "OnInjectedAnimationDelegate.generated.h"

class AAtlasBasicAICharacter;
class UAtlasBasicAIAnimInstance;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInjectedAnimation, AAtlasBasicAICharacter*, Owner, UAtlasBasicAIAnimInstance*, AnimInstance);

