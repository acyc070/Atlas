#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TarAnimUtils.generated.h"

class UAnimInstance;
class UAnimSequenceBase;
class UAnimationAsset;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UTarAnimUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTarAnimUtils();

    UFUNCTION(BlueprintPure)
    static float GetScaledAnimationLength(const UAnimSequenceBase* animationSequence);
    
    UFUNCTION(BlueprintPure)
    static UAnimationAsset* GetCurrentAnimFromStateMachine(UAnimInstance* AnimInstance, FName MachineName);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetBoneLocalSpaceTransform(USkeletalMeshComponent* Mesh, FName BoneName);
    
    UFUNCTION(BlueprintPure)
    static float GetAnimationLength(const UAnimSequenceBase* animationSequence);
    
};

