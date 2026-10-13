#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/CapsuleComponent.h"
#include "FluidCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UFluidCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UFluidCapsuleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartVelocityCalcDuringTick();
    
    UFUNCTION(BlueprintCallable)
    FVector GetCalculatedVelocity();
    
    UFUNCTION(BlueprintCallable)
    void EndVelocityCalcDuringTick();
    
};

