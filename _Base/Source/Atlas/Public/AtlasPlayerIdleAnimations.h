#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AtlasPlayerAnimIdleData.h"
#include "AtlasPlayerIdleAnimations.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasPlayerIdleAnimations : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimIdleData> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UAtlasPlayerIdleAnimations();

};

