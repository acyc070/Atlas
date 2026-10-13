#pragma once
#include "CoreMinimal.h"
#include "DollhouseRoomInfo.h"
#include "DollhouseRoomRow.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FDollhouseRoomRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDollhouseRoomInfo> Rooms;
    
    FDollhouseRoomRow();
};

