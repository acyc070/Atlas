#pragma once
#include "CoreMinimal.h"
#include "AtlasGrabbable.h"
#include "AtlasHangable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasHangable : public UAtlasGrabbable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostReleasePreventCollisionsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowJumpOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlignWithXAxis;
    
    UAtlasHangable(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void ResetPawnPhysics();
    
};

