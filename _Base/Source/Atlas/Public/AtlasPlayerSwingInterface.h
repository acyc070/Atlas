#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerGrabInterface.h"
#include "AtlasPlayerSwingInterface.generated.h"

class UAtlasGrabHelper;
class UBikRetargetingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerSwingInterface : public UAtlasPlayerGrabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HangableMaximumForwardReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumInputForPassiveJumpOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IKHandSpacing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasGrabHelper* GrabHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBikRetargetingComponent* IkinemaRetargeting;
    
public:
    UAtlasPlayerSwingInterface(const FObjectInitializer& ObjectInitializer);

};

