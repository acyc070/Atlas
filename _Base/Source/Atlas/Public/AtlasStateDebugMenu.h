#pragma once
#include "CoreMinimal.h"
#include "AtlasStateDebugMenu.generated.h"

USTRUCT(BlueprintType)
struct FAtlasStateDebugMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Verbose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceEmptyGameOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceEmptyMetaGameOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceEmptyCollectiblesOnLoad;
    
    ATLAS_API FAtlasStateDebugMenu();
};

