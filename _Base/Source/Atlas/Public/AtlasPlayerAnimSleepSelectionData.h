#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimSleepSelectionData.generated.h"

class UAtlasPlayerSleepAnimations;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimSleepSelectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasPlayerSleepAnimations* Anims;
    
    ATLAS_API FAtlasPlayerAnimSleepSelectionData();
};

