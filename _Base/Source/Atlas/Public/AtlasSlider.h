#pragma once
#include "CoreMinimal.h"
#include "AtlasWidget.h"
#include "AtlasSlider.generated.h"

class USlider;

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasSlider : public UAtlasWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* Slider;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedsToCaptureInputs;
    
public:
    UAtlasSlider();

};

