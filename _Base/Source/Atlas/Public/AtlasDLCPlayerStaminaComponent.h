#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerStaminaComponent.h"
#include "AtlasDLCPlayerStaminaComponent.generated.h"

class AAtlasDLCPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasDLCPlayerStaminaComponent : public UAtlasPlayerStaminaComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSwimInputForFullStamiaDrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaSwimDrainRateMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaSwimDrainRateIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasDLCPlayer* DLCPlayerPawn;
    
public:
    UAtlasDLCPlayerStaminaComponent(const FObjectInitializer& ObjectInitializer);

};

