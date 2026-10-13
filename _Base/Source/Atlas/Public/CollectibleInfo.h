#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELevel.h"
#include "CollectibleInfo.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FCollectibleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ConceptArt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevel Level;
    
    FCollectibleInfo();
};

