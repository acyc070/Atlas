#pragma once
#include "CoreMinimal.h"
#include "AtlasAnimSelectionData.h"
#include "AtlasAIAnimIdleData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasAIAnimIdleData : public FAtlasAnimSelectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoreOftenWhenNotInSameRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDoWhenAware;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameOfAnimation;
    
    ATLAS_API FAtlasAIAnimIdleData();
};

