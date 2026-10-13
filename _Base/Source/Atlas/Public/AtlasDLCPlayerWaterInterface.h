#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasDLCPlayerWaterInterface.generated.h"

class AAtlasDLCPlayer;
class AAtlasWaterVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasDLCPlayerWaterInterface : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWadingDepth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasDLCPlayer* playerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasWaterVolume* CurrentWaterVolume;
    
public:
    UAtlasDLCPlayerWaterInterface(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnSwimLandingComplete(const FName& NotifyName);
    
};

