#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtlasClimbRestrictionVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATLAS_API AAtlasClimbRestrictionVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanClimbUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanClimbDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanClimbLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanClimbRight;
    
    AAtlasClimbRestrictionVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

