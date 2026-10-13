#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAtlasPlayerLookAroundAnimState.h"
#include "AtlasPlayerAnimLookAroundData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimLookAroundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasPlayerLookAroundAnimState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Angles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchBlendWeight;
    
    ATLAS_API FAtlasPlayerAnimLookAroundData();
};

