#pragma once
#include "CoreMinimal.h"
#include "AtlasFormattableTextBlockInfo.h"
#include "AtlasWidget.h"
#include "AtlasFormattableTextBlockParameter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasFormattableTextBlockParameter : public UAtlasWidget {
    GENERATED_BODY()
public:
    UAtlasFormattableTextBlockParameter();

    UFUNCTION(BlueprintNativeEvent)
    void InitializeFromFormatParameterInfo(FAtlasFormattableTextBlockInfo Info);
    
};

