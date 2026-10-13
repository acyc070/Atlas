#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPresenceString.h"
#include "PS4PresenceStringsRow.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FPS4PresenceStringsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPresenceString PresenceStringEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PresenceString;
    
    FPS4PresenceStringsRow();
};

