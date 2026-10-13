#pragma once
#include "CoreMinimal.h"
#include "AtlasMenuWidget.h"
#include "AtlasHintWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasHintWidget : public UAtlasMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lifetime;
    
public:
    UAtlasHintWidget();

};

