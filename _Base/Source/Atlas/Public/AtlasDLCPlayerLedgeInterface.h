#pragma once
#include "CoreMinimal.h"
#include "AtlasLedgeClimbParams.h"
#include "AtlasPlayerLedgeInterface.h"
#include "AtlasDLCPlayerLedgeInterface.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasDLCPlayerLedgeInterface : public UAtlasPlayerLedgeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasLedgeClimbParams> SwimClimbParams;
    
    UAtlasDLCPlayerLedgeInterface(const FObjectInitializer& ObjectInitializer);

};

