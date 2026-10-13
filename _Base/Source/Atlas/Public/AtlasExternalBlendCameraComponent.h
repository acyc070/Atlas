#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "AtlasExternalBlendCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasExternalBlendCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* InnerCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* OuterCamera;
    
    UAtlasExternalBlendCameraComponent(const FObjectInitializer& ObjectInitializer);

};

