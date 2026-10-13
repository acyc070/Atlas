#pragma once
#include "CoreMinimal.h"
#include "AIHostileData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAIHostileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostileTime;
    
    FAIHostileData();
};

