#pragma once
#include "CoreMinimal.h"
#include "EAtlasInputDirections.h"
#include "EAtlasPlayerControl2D.h"
#include "AtlasInputMappingNameToPlayerControl2DMapping.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasInputMappingNameToPlayerControl2DMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerControl2D> Control2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasInputDirections Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CorrespondingInputManagerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorrespondingScale;
    
    FAtlasInputMappingNameToPlayerControl2DMapping();
};

