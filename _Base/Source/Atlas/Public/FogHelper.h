#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtlasRoomVolumeFogSettings.h"
#include "FogHelper.generated.h"

class AExponentialHeightFog;

UCLASS(Blueprintable)
class ATLAS_API UFogHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFogHelper();

    UFUNCTION(BlueprintCallable)
    static void ApplyFog(AExponentialHeightFog* Target, UPARAM(Ref) FAtlasRoomVolumeFogSettings& fog);
    
};

