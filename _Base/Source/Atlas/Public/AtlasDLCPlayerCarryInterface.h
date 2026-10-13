#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerCarryInterface.h"
#include "AtlasDLCPlayerCarryInterface.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasDLCPlayerCarryInterface : public UAtlasPlayerCarryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStandingPickUpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxItemSlotPickUpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNomeThrowInputTime;
    
    UAtlasDLCPlayerCarryInterface(const FObjectInitializer& ObjectInitializer);

};

