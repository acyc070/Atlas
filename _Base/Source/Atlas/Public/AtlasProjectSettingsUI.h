#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlasInputMappingNameToPlayerControl2DMapping.h"
#include "AtlasInputMappingNameToPlayerControlMapping.h"
#include "CreditsScreenObjectVariables.h"
#include "FormattableTextBlockParameterToWidgetClass.h"
#include "InputTypeToTextureConfigMapping.h"
#include "LocalizedLevelNamesDataTableVariable.h"
#include "PlayerMaskDataTableVariable.h"
#include "Templates/SubclassOf.h"
#include "UIProjectSettingsObjectVariables.h"
#include "AtlasProjectSettingsUI.generated.h"

class UAtlasMenuWidget;
class UAtlasPauseMenuWidget;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ATLAS_API UAtlasProjectSettingsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAtlasPauseMenuWidget> PauseMenuClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAtlasPauseMenuWidget> FocusTestPauseMenuClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAtlasPauseMenuWidget> DebugPauseMenuClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAtlasMenuWidget> ControllerConnectionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAtlasMenuWidget> UserLoggedOutResolutionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasInputMappingNameToPlayerControlMapping> InputNameToPlayerControl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasInputMappingNameToPlayerControl2DMapping> InputNameToPlayerControl2D;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputTypeToTextureConfigMapping> TextureConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattableTextBlockParameterToWidgetClass> FormatParameterToWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIProjectSettingsObjectVariables Assets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreditsScreenObjectVariables CreditsScreenVariables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerMaskDataTableVariable PlayerMasksVariables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalizedLevelNamesDataTableVariable LocalizedLevelNamesVariables;
    
    UAtlasProjectSettingsUI();

};

