#pragma once
#include "CoreMinimal.h"
#include "PS4PresenceStringsVariables.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct ATLAS_API FPS4PresenceStringsVariables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PS4PresenceStringsDataTable;
    
    FPS4PresenceStringsVariables();
};

