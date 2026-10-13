#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "TarFakeSpring.h"
#include "TarFakeSpringComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TARSIERUTILITIES_API UTarFakeSpringComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarFakeSpring SpringImpl;
    
public:
    UTarFakeSpringComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWorldLinearVelocity(FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalLinearVelocity(FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void DoWorldLinearFixedSizeWobble(FVector displacement);
    
    UFUNCTION(BlueprintCallable)
    void DoLocalLinearFixedSizeWobble(FVector displacement);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldLinearVelocity(FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldLinearAcceleration(FVector Acceleration);
    
    UFUNCTION(BlueprintCallable)
    void AddLocalLinearVelocity(FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void AddLocalLinearAcceleration(FVector Acceleration);
    
};

