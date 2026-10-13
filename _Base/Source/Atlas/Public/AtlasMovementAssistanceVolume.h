#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtlasMovementAssistanceVolume.generated.h"

class AAtlasPlayer;
class AAtlasPlayerController;

UCLASS(Blueprintable)
class ATLAS_API AAtlasMovementAssistanceVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* CachedPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasPlayerController* CachedPlayerController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeyboardOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    AAtlasMovementAssistanceVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnPlayerSpawn(AAtlasPlayer* playerPawn);
    
};

