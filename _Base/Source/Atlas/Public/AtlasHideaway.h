#pragma once
#include "CoreMinimal.h"
#include "AtlasGrabbable.h"
#include "AtlasHideawayAnimationSet.h"
#include "AtlasHideaway.generated.h"

class UAtlasHideawayAnimInstance;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasHideaway : public UAtlasGrabbable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasHideawayAnimationSet PlayerAnimationSetOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasHideawayAnimationSet HideawayAnimationSetOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasHideawayAnimInstance* AnimInstance;
    
public:
    UAtlasHideaway(const FObjectInitializer& ObjectInitializer);

};

