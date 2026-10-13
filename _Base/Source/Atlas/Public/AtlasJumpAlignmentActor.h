#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtlasJumpAlignmentActor.generated.h"

class UAtlasJumpAlignmentComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasJumpAlignmentActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasJumpAlignmentComponent* JumpAlignmentComponent;
    
public:
    AAtlasJumpAlignmentActor(const FObjectInitializer& ObjectInitializer);

};

