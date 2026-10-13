#pragma once
#include "CoreMinimal.h"
#include "DoorPositionData.h"
#include "EDoorInteractionType.h"
#include "DoorInteractionParameters.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FDoorInteractionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoorPositionData InteractLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoorPositionData PursuitInteractLocation;
    
    FDoorInteractionParameters();
};

