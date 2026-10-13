#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AtlasPlayerMaterialOverrideData.h"
#include "EAtlasMaterialVertexPaintMode.h"
#include "EAtlasPlayerMaterialSection.h"
#include "AtlasPlayerMaterialOverrideComponent.generated.h"

class AAtlasPlayer;
class UMaterialInterface;
class USkeletalMeshComponent;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerMaterialOverrideComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* PlayerReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PlayerMesh;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PlayerOriginalMaterials[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerMaterialOverrideData MaterialOverrides[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DynamicVertexTextures[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PerlinNoiseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverBeActivated;
    
public:
    UAtlasPlayerMaterialOverrideComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnsetMaterialOverride(EAtlasPlayerMaterialSection MaterialSectionToUnset);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialOverride(EAtlasPlayerMaterialSection MaterialSection, float OverrideDuration);
    
    UFUNCTION(BlueprintCallable)
    void ColorizeVertecesInRadius(FColor Color, FVector WorldLocation, float Radius, bool bUseFalloff, EAtlasMaterialVertexPaintMode VertexPaintMode, float Duration);
    
};

