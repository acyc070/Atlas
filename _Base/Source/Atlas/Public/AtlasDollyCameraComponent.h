#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasDollyCameraComponent.generated.h"

class AAtlasDollyCameraVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAtlasDollyCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasDollyCameraVolume* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MapToActiveVolume;
    
    UAtlasDollyCameraComponent(const FObjectInitializer& ObjectInitializer);

};

