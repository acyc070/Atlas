#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "AtlasFKeyToTextureMapping.h"
#include "AtlasNameToTextureMapping.h"
#include "AtlasUIAction.h"
#include "EAtlasInputDirections.h"
#include "EAtlasInputType.h"
#include "EAtlasPlayerControl.h"
#include "EAtlasPlayerControl2D.h"
#include "AtlasPlatformTexturesConfig.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UAtlasPlatformTexturesConfig : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PS5ControllerInstructionsTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasFKeyToTextureMapping> KeysTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasNameToTextureMapping> NamedTextures;
    
public:
    UAtlasPlatformTexturesConfig();

    UFUNCTION(BlueprintPure)
    UTexture2D* GetUIActionTexture(AtlasUIAction Action) const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetNamedTexture(FName Name) const;
    
    UFUNCTION(BlueprintPure)
    FString GetMappedCharacter(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetKeyTexture(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    FKey GetKeyForControlTexture2D(TEnumAsByte<EAtlasPlayerControl2D> Control, EAtlasInputDirections Direction) const;
    
    UFUNCTION(BlueprintPure)
    FKey GetKeyForControlTexture(TEnumAsByte<EAtlasPlayerControl> Control) const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetControlTexture(TEnumAsByte<EAtlasPlayerControl> Control) const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetControl2DTexture(TEnumAsByte<EAtlasPlayerControl2D> Control, EAtlasInputDirections Direction) const;
    
};

