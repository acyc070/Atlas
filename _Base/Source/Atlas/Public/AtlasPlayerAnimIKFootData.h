#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimIKFootData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimIKFootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlopeBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> IgnoredComponents;
    
    ATLAS_API FAtlasPlayerAnimIKFootData();
};

