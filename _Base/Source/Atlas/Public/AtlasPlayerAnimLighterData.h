#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAtlasPlayerLighterAnimState.h"
#include "AtlasPlayerAnimLighterData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimLighterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasPlayerLighterAnimState CurrentLighterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAroundAngles;
    
    ATLAS_API FAtlasPlayerAnimLighterData();
};

