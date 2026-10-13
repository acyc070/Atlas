#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "AtlasTimeBlendCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasTimeBlendCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraComponent* Target;
    
    UAtlasTimeBlendCameraComponent(const FObjectInitializer& ObjectInitializer);

};

