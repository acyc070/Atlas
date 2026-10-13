#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TarFakeSpringParams.h"
#include "AtlasGrabHelperShapeProperties.h"
#include "AtlasOnGrabHelperGrabChangedSignatureDelegate.h"
#include "EAtlasGrabHelperMaterial.h"
#include "AtlasGrabHelper.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasGrabHelper : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasGrabHelperShapeProperties ShapeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideClimbSpringParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarFakeSpringParams ClimbSpringParamsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGrabMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGrabHelperMaterial GrabMaterialOverride;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnGrabHelperGrabChangedSignature OnGrabChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
public:
    UAtlasGrabHelper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAsRing(float Radius, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    void SetAsPushPanel(float NewLength, float Height);
    
    UFUNCTION(BlueprintCallable)
    void SetAsBar(float NewLength, float Thickness);
    
    UFUNCTION(BlueprintPure)
    void GetRingProperties(float& Radius, float& Thickness) const;
    
    UFUNCTION(BlueprintPure)
    void GetPushPanelProperties(float& NewLength, float& Height) const;
    
    UFUNCTION(BlueprintPure)
    void GetBarProperties(float& NewLength, float& Thickness) const;
    
};

