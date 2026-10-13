#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AtlasGrabbable.h"
#include "AtlasLedge.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasLedge : public UAtlasGrabbable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector SplineInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat SplineReparamTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReparamStepsPerSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanClimbUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoClimbUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportToSegmentCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBlockingCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAIUseOnTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAIUseBelow;
    
    UAtlasLedge(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWorldLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation);
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldLocationAtSplinePoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldLocationAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSplinePoints() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSplinePoints();
    
    UFUNCTION(BlueprintCallable)
    void AddSplineWorldPoint(const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void AddSplineLocalPoint(const FVector& Position);
    
};

