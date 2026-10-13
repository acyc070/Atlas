#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AtlasGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAtlasGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UAtlasGameInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsResumingGame();
    
};

