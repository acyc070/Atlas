#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAtlasAILimb.h"
#include "AtlasAITouchHotspot.generated.h"

class UAnimSequence;
class USceneComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasAITouchHotspot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasAILimb PreferredHand;
    
    AAtlasAITouchHotspot(const FObjectInitializer& ObjectInitializer);

};

