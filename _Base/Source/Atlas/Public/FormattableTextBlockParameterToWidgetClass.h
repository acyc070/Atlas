#pragma once
#include "CoreMinimal.h"
#include "EAtlasFormatParameter.h"
#include "Templates/SubclassOf.h"
#include "FormattableTextBlockParameterToWidgetClass.generated.h"

class UAtlasFormattableTextBlockParameter;

USTRUCT(BlueprintType)
struct ATLAS_API FFormattableTextBlockParameterToWidgetClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasFormatParameter ParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAtlasFormattableTextBlockParameter> AssociatedWidgetClass;
    
    FFormattableTextBlockParameterToWidgetClass();
};

