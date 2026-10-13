#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/SaveGame.h"
#include "AtlasCloudSyncSaveGame.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasCloudSyncSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> ActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> AxisMappings;
    
    UAtlasCloudSyncSaveGame();

    UFUNCTION(BlueprintCallable)
    void Fill();
    
};

