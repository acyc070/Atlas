#pragma once
#include "CoreMinimal.h"
#include "AtlasFormattableTextBlockInfo.h"
#include "AtlasWidget.h"
#include "EAtlasTextType.h"
#include "AtlasFormattableTextBlock.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasFormattableTextBlock : public UAtlasWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasTextType TextType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarginBetweenWords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasFormattableTextBlockInfo> FormatInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox;
    
public:
    UAtlasFormattableTextBlock();

protected:
    UFUNCTION(BlueprintCallable)
    bool TryActualFormatting(const FText& textToFormat);
    
};

