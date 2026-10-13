#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "AtlasPlayerStartParams.h"
#include "AtlasPlayerStartSpawnSignatureDelegate.h"
#include "AtlasPlayerStart.generated.h"

UCLASS(Blueprintable)
class ATLAS_API AAtlasPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootIk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoWake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerStartParams params;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerStartSpawnSignature OnPlayerSpawnEvent;
    
    AAtlasPlayerStart(const FObjectInitializer& ObjectInitializer);

};

