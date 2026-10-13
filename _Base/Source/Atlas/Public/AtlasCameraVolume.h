#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtlasCameraVolume.generated.h"

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasCameraVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    AAtlasCameraVolume(const FObjectInitializer& ObjectInitializer);

};

