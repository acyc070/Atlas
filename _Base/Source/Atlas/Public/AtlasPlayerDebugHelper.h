#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAtlasGrabChangeType.h"
#include "EAtlasGrabHelperMaterial.h"
#include "EAtlasLimb.h"
#include "ETarMovementMode.h"
#include "AtlasPlayerDebugHelper.generated.h"

class UAnimSequenceBase;
class UAtlasGrabHelper;
class UAtlasGrabbable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerDebugHelper : public UActorComponent {
    GENERATED_BODY()
public:
    UAtlasPlayerDebugHelper(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnMovementModeChanged(TEnumAsByte<ETarMovementMode> previousMovementMode, TEnumAsByte<ETarMovementMode> movementMode);
    
    UFUNCTION()
    void OnLedgeClimbStarted(UAnimSequenceBase* Animation);
    
    UFUNCTION()
    void OnGrabStart(UAtlasGrabbable* grabbedComponent);
    
    UFUNCTION()
    void OnGrabEnd(UAtlasGrabbable* grabbedComponent);
    
    UFUNCTION()
    void OnGrabChanged(UAtlasGrabbable* grabbedComponent, UAtlasGrabHelper* helper, TEnumAsByte<EAtlasLimb> Limb, TEnumAsByte<EAtlasGrabChangeType> ChangeType, EAtlasGrabHelperMaterial Material);
    
};

