#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerMovementModifierComponent.h"
#include "TarMovementParams.h"
#include "AtlasDLCPlayerMovementModifierComponent.generated.h"

class AAtlasDLCPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasDLCPlayerMovementModifierComponent : public UAtlasPlayerMovementModifierComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarMovementParams WaterWadingMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarMovementParams WaterSwimmingMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasDLCPlayer* DLCPlayerPawn;
    
public:
    UAtlasDLCPlayerMovementModifierComponent(const FObjectInitializer& ObjectInitializer);

};

