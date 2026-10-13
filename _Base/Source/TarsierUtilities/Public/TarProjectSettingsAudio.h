#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TarProjectSettingsAudio.generated.h"

class USoundClass;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TARSIERUTILITIES_API UTarProjectSettingsAudio : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* MasterSoundClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MasterSoundClassPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterVolumeMultiplier;
    
    UTarProjectSettingsAudio();

};

