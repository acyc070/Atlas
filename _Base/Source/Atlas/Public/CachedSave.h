#pragma once
#include "CoreMinimal.h"
#include "CachedSave.generated.h"

class UAtlasState;

USTRUCT(BlueprintType)
struct FCachedSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasState* State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasState* DlcState;
    
    ATLAS_API FCachedSave();
};

