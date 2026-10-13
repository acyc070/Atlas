#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimLandingSet.h"
#include "AtlasPlayerAnimLandData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimLandData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOrInvTurnCircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLandingSet BlendSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    ATLAS_API FAtlasPlayerAnimLandData();
};

