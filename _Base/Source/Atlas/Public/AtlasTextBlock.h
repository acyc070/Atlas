#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "EAtlasInputType.h"
#include "EAtlasTextType.h"
#include "AtlasTextBlock.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasTextType Type;
    
    UAtlasTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetType(EAtlasTextType NewType);
    
private:
    UFUNCTION()
    void RebuildWidgetFont();
    
public:
    UFUNCTION(BlueprintCallable)
    void OverrideOriginalFontSize(float newFontSize);
    
    UFUNCTION()
    void OnInputTypeChanged(EAtlasInputType InputType);
    
};

