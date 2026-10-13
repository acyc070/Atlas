#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputProjectSettingsObjectVariables.h"
#include "AtlasProjectSettingsInput.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ATLAS_API UAtlasProjectSettingsInput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputProjectSettingsObjectVariables Variables;
    
    UAtlasProjectSettingsInput();

};

