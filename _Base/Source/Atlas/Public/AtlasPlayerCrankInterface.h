#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlasPlayerGrabInterface.h"
#include "TarCharacterLocationTargetParams.h"
#include "AtlasPlayerCrankInterface.generated.h"

class UAtlasCrank;
class UAtlasGrabHelper;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerCrankInterface : public UAtlasPlayerGrabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarCharacterLocationTargetParams PositioningParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval CrankGrabHeightInterval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval InitialOffsetDistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceErrorToCompleteInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasCrank* CrankComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasGrabHelper* GrabHelper;
    
public:
    UAtlasPlayerCrankInterface(const FObjectInitializer& ObjectInitializer);

};

