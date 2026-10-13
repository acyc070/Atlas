#pragma once
#include "CoreMinimal.h"
#include "AtlasCameraVolume.h"
#include "AtlasDollyRotationOffsets.h"
#include "AtlasDollyCameraVolume.generated.h"

UCLASS(Blueprintable)
class ATLAS_API AAtlasDollyCameraVolume : public AAtlasCameraVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDollyRotationOffsets RotationOffsets;
    
    AAtlasDollyCameraVolume(const FObjectInitializer& ObjectInitializer);

};

