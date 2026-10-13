#pragma once
#include "CoreMinimal.h"
#include "AtlasGrabHelper.h"
#include "AtlasNomeGrabHelper.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasNomeGrabHelper : public UAtlasGrabHelper {
    GENERATED_BODY()
public:
    UAtlasNomeGrabHelper(const FObjectInitializer& ObjectInitializer);

};

