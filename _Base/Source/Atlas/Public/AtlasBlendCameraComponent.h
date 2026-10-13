#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "CameraBlendPlaneInfo.h"
#include "AtlasBlendCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasBlendCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* InnerCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* OuterCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraBlendPlaneInfo BlendPlane;
    
    UAtlasBlendCameraComponent(const FObjectInitializer& ObjectInitializer);

};

