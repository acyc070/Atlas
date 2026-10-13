#pragma once
#include "CoreMinimal.h"
#include "TarJumpParams.h"
#include "AtlasPlayerJumpParamCollection.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerJumpParamCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarJumpParams VerticalJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarJumpParams ForwardJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarJumpParams SprintJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarJumpParams CrouchJump;
    
    ATLAS_API FAtlasPlayerJumpParamCollection();
};

