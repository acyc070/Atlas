#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerDeathType.h"
#include "Templates/SubclassOf.h"
#include "AtlasDeathTypeHandlerMap.generated.h"

class AAtlasPlayerDeathTypeHandler;

USTRUCT(BlueprintType)
struct FAtlasDeathTypeHandlerMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerDeathType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAtlasPlayerDeathTypeHandler> Handler;
    
    ATLAS_API FAtlasDeathTypeHandlerMap();
};

