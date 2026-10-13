#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "AtlasUIAction.h"
#include "EAtlasFormatParameter.h"
#include "EAtlasPlayerControl.h"
#include "EAtlasPlayerControl2D.h"
#include "AtlasFormattableTextBlockInfo.generated.h"

USTRUCT(BlueprintType)
struct FAtlasFormattableTextBlockInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasFormatParameter ParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerControl> Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerControl2D> Control2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AtlasUIAction UIAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadOnly;
    
    ATLAS_API FAtlasFormattableTextBlockInfo();
};

