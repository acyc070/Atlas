#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "EAtlasFrustumBlockerAxis.h"
#include "AtlasFrustumBlockerVolume.generated.h"

UCLASS(Blueprintable)
class AAtlasFrustumBlockerVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasFrustumBlockerAxis BlockAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Softness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> Disablers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> Enablers;
    
    AAtlasFrustumBlockerVolume(const FObjectInitializer& ObjectInitializer);

};

