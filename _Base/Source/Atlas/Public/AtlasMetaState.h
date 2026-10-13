#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AtlasMetaState.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasMetaState : public USaveGame {
    GENERATED_BODY()
public:
    UAtlasMetaState();

};

