#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimWalkStartSet.h"
#include "AtlasPlayerAnimWalkStartData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimWalkStartData : public FAtlasPlayerAnimWalkStartSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchAmount;
    
    ATLAS_API FAtlasPlayerAnimWalkStartData();
};

