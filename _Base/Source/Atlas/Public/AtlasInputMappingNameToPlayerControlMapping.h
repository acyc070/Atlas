#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerControl.h"
#include "AtlasInputMappingNameToPlayerControlMapping.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasInputMappingNameToPlayerControlMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerControl> Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CorrespondingInputManagerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEngineMappingAxis;
    
    FAtlasInputMappingNameToPlayerControlMapping();
};

