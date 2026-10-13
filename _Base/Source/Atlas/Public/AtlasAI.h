#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AtlasAI.generated.h"

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasAI : public ACharacter {
    GENERATED_BODY()
public:
    AAtlasAI(const FObjectInitializer& ObjectInitializer);

};

