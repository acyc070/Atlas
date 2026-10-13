#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraBlendTriangle.h"
#include "ECameraBlendPlane.h"
#include "CameraBlendPlaneInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraBlendPlaneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraBlendPlane PlaneType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Vertices[16];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Values[16];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraBlendTriangle> Triangles;
    
    ATLAS_API FCameraBlendPlaneInfo();
};

