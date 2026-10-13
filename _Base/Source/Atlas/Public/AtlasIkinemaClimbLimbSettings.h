#pragma once
#include "CoreMinimal.h"
#include "EBikTaskIdentifier.h"
#include "UObject/NoExportTypes.h"
#include "AtlasIkinemaClimbLimbSettings.generated.h"

class UAtlasGrabHelper;

USTRUCT(BlueprintType)
struct FAtlasIkinemaClimbLimbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBikTaskIdentifier TaskId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox SearchLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasGrabHelper* CurrentGrabHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasGrabHelper* PreviousGrabHelper;
    
    ATLAS_API FAtlasIkinemaClimbLimbSettings();
};

