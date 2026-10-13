#pragma once
#include "CoreMinimal.h"
#include "MenuStackData.generated.h"

class UAtlasMenuWidget;

USTRUCT(BlueprintType)
struct FMenuStackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasMenuWidget* Menu;
    
    ATLAS_API FMenuStackData();
};

