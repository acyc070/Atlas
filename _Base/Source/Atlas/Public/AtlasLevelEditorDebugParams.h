#pragma once
#include "CoreMinimal.h"
#include "AtlasLevelEditorDebugParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasLevelEditorDebugParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowLedges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowDebugLines;
    
    ATLAS_API FAtlasLevelEditorDebugParams();
};

