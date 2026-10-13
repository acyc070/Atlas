#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasPlayerJumpFailSignatureDelegate.h"
#include "AtlasPlayerJumpParamCollection.h"
#include "EAtlasPlayerMoveModTypes.h"
#include "EAtlasStaminaState.h"
#include "AtlasPlayerJumpModifierComponent.generated.h"

class AAtlasPlayer;
class UAtlasPlayerAnimationOverrideComponent;
class UAtlasPlayerCrouchComponent;
class UAtlasPlayerDamageComponent;
class UAtlasPlayerMovementModifierComponent;
class UAtlasPlayerStaminaComponent;
class UAtlasPlayerWalkStartComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerJumpModifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerJumpFailSignature JumpFailedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpHeightModifier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCeilingHeightToJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasStaminaState> MinStaminaStateForJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHungerStateForJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAtlasPlayerMoveModTypes> JumpRestrictionTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinForwardJumpWalkFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardJumpBaseVelPerpendicularScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerJumpParamCollection StandardJumpParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerJumpParamCollection TiredJumpParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerJumpParamCollection ExhaustedJumpParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerJumpParamCollection BalanceBeamJumpParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerStaminaComponent* StaminaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerMovementModifierComponent* MovementModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerCrouchComponent* CrouchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerWalkStartComponent* WalkStartComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerAnimationOverrideComponent* AnimationOverrideComponent;
    
public:
    UAtlasPlayerJumpModifierComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnPlayerJumpLaunch();
    
};

