#pragma once
#include "CoreMinimal.h"
#include "AtlasCameraVolume.h"
#include "AtlasStaticCameraVolume.generated.h"

class ACameraActor;

UCLASS(Blueprintable)
class ATLAS_API AAtlasStaticCameraVolume : public AAtlasCameraVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* Camera;
    
    AAtlasStaticCameraVolume(const FObjectInitializer& ObjectInitializer);

};

