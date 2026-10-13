#pragma once
#include "CoreMinimal.h"
#include "BikRTAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TarSmoothFollowerParams.h"
#include "AtlasHideawayAnimationData.h"
#include "AtlasPlayerAIDeathStateData.h"
#include "AtlasPlayerAnimCarryData.h"
#include "AtlasPlayerAnimCarrySet.h"
#include "AtlasPlayerAnimClimbData.h"
#include "AtlasPlayerAnimCrankData.h"
#include "AtlasPlayerAnimDragData.h"
#include "AtlasPlayerAnimHeadCollisionData.h"
#include "AtlasPlayerAnimHungerData.h"
#include "AtlasPlayerAnimIKFootData.h"
#include "AtlasPlayerAnimIdleGrabReactionData.h"
#include "AtlasPlayerAnimJumpData.h"
#include "AtlasPlayerAnimJumpSet.h"
#include "AtlasPlayerAnimLandData.h"
#include "AtlasPlayerAnimLedgeClimbData.h"
#include "AtlasPlayerAnimLedgeData.h"
#include "AtlasPlayerAnimLeechData.h"
#include "AtlasPlayerAnimLeverData.h"
#include "AtlasPlayerAnimLighterData.h"
#include "AtlasPlayerAnimLocomotionSet.h"
#include "AtlasPlayerAnimLocomotionSetExtended.h"
#include "AtlasPlayerAnimLookAroundData.h"
#include "AtlasPlayerAnimMovementModifierIdlesMap.h"
#include "AtlasPlayerAnimOverrideData.h"
#include "AtlasPlayerAnimOverrideParams.h"
#include "AtlasPlayerAnimSleepData.h"
#include "AtlasPlayerAnimSleepSelectionData.h"
#include "AtlasPlayerAnimSwingData.h"
#include "AtlasPlayerAnimSwingParams.h"
#include "AtlasPlayerAnimWalkData.h"
#include "AtlasPlayerAnimWalkStartData.h"
#include "AtlasPlayerAnimWalkStopData.h"
#include "AtlasPlayerAnimWallsData.h"
#include "EAtlasGrabbableType.h"
#include "EAtlasLimb.h"
#include "EAtlasPlayerAnimConcussiveLandType.h"
#include "EAtlasPlayerCarryTransitionType.h"
#include "EAtlasPlayerDeathType.h"
#include "EAtlasPlayerGrabPhase.h"
#include "EAtlasPlayerWalkStartType.h"
#include "EAtlasStaminaState.h"
#include "ETarMovementMode.h"
#include "AtlasPlayerAnimInstance.generated.h"

class AAtlasPlayer;
class UAnimSequence;
class UAnimSequenceBase;
class UAtlasGrabbable;
class UAtlasPlayerIdleAnimations;
class UBikRetargetingComponent;
class UBlendSpace;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasPlayerAnimInstance : public UBikRTAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool FootIKForceDisabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PlayerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBikRetargetingComponent* IKRetargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimWalkData WalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLocomotionAnimationSetIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimLocomotionSetExtended> LocomotionAnimationSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentJumpAnimationDataIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimJumpData> JumpAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLandAnimationDataIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimLandData> LandData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasPlayerAnimConcussiveLandType ConcussiveLandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LocomotionAnimationBlendTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLighterData LighterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimHeadCollisionData HeadCollisionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimWallsData PressOnWallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalanceBeamLeanAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentWalkStartAnimationDataIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimWalkStartData> WalkStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentOverrideDataIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimOverrideData> OverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSliding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSlideExitToCrouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSlideExitToCrawl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPlayIdleAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReactionBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabReactionFastBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimWalkStopData> WalkStopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentWalkStopAnimationDataIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fallHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallWallImpactAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FallWallImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLookAroundData LookAroundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> CarryTransitionAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentCarryTransitionAnimIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimLedgeClimbData> LedgeClimbData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLedgeClimbDataIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimSleepData SleepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimCarryData CarryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimSwingData SwingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimClimbData ClimbData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLeverData LeverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimCrankData CrankData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasHideawayAnimationData HideawayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLedgeData LedgeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimDragData DragData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLeechData LeechData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LighterIgnitionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasStaminaState> MaxStaminaStateForStaminaLighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimHungerData HungerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteamLayeredBlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerDeathType> deathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeathModifierVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAIDeathStateData> AIDeathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAIDeathStateDataIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIKinemaFullBodySolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimIKFootData FootIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet DefaultLocomotionAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLocomotionAnimationBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaChangeLocomotionAnimationBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HungryChangeLocomotionAnimationBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StumbleLocomotionAnimationBlendTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval TimeBetweenIdleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSameIdleAnimTwiceInARow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasPlayerIdleAnimations* DefaultIdleFlavourAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimMovementModifierIdlesMap> IdleFlavourMovementModifierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimSleepSelectionData> SleepAnimationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintAccelerationLeanStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintIdleLockInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticTurnFakeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimJumpSet DefaultJumpAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams LookAtPOIMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams LookAroundMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams LookAroundMovementParamsCoolWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams LookLighterMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAroundLimitsCoolWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAroundLimitsSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAroundBlendOutDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAroundSuppressedBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAroundSuppressedBlendInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PressOnWallStandAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressOnWallsBlendInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressOnWallsBlendOutSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PressOnWallsBlendOutInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalanceBeamLeanSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIdleGrabReactionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReactionBlendInTimeInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReactionBlendInTimeSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReactionBlendOutTimeIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReactionBlendOutTimeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReactionWalkJogBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReactionResistBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimIdleGrabReactionData IdleGrabReactionAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbMinAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbGlobalAnimMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClimbSlowsAnimWithIKStretch;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ClimbFallInitNormalVelocityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbFallFastVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DefaultLeverIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DefaultLeverPullPushLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DefaultLeverPullPushRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrankStrengthDivisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams DragVelocitySmoothingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragPlayerMinVelocityDragImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragPlayerVelocityDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinInputAngleToResetAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragBackStepThresholdHysteresis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopeActiveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet CrawlLocomotionAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet PetrificationLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet PainfulFloorLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet HighUpLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet NoisyFloorLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet BalanceBeamLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet TiredLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet ExhausedLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet LeechAttachedLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet PressAgainstPlatformEdgeLocomotionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet ShoePitLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet CoolWalkLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* CoolWalkUpStairsBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* CoolWalkDownStairsBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet LeechGooLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet HypnotizedLocomotionAnimSet;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval HungryLayeredBlendApplicationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HungryLayeredBlendTimeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HungryLayeredBlendTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HungrySpineLayeredBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAtlasStaminaState>> HungerAnimationStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet AscendStairsLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet DescendStairsLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet StumbleLocomotionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimJumpSet TiredJumpAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimJumpSet ExhaustedJumpAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimCarrySet SmallCylinderCarryAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimCarrySet KeyCarryAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimCarrySet NomeCarryAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimCarrySet MirrorCarryAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CarryMinThrowAnimationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DeafaultFoodEatAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeClimbBlockedAnimLockInTimeStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeClimbBlockedAnimLockInTimeHang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams SwingInputSmoothingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams SwingVelocitySmoothingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimSwingParams SwingAnimParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimSwingParams SwingAnimParamsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteamLayeredBlendTimeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteamLayeredBlendTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticLandDeadZoneSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DefaultAIDeathAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLocomotionAnimBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWalkStartAnimBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWalkStopAnimBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumJumpAnimBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLandAnimBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCarryTransitionAnimBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLedgeClimbAnimBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAIDeathAnimBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAnimOverrideBanks;
    
public:
    UAtlasPlayerAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    bool ShouldExitWalkingState() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFootIKForceDisabled(bool Enabled);
    
protected:
    UFUNCTION()
    void ResetDragVelocity(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushAIDeathAnimationData(FAtlasPlayerAIDeathStateData Data);
    
protected:
    UFUNCTION()
    void OnWalkStartBegin(EAtlasPlayerWalkStartType Type);
    
    UFUNCTION()
    void OnLedgeClimbAnimationCompleted(const FName& NotifyName);
    
    UFUNCTION()
    void OnLedgeBeginNewClimb(UAnimSequenceBase* anim);
    
    UFUNCTION()
    void OnLanded(float _fallHeight, FVector ImpactVelocity, const FHitResult& HitResult);
    
    UFUNCTION()
    void OnJumpStart();
    
    UFUNCTION()
    void OnJumpExitState(const FName& NotifyName);
    
    UFUNCTION()
    void OnGrabStart(UAtlasGrabbable* grabbedComponent);
    
    UFUNCTION()
    void OnGrabReactionExitInitState(const FName& NotifyName);
    
    UFUNCTION()
    void OnGrabEnd(UAtlasGrabbable* grabbedComponent);
    
    UFUNCTION()
    void OnDeath(TEnumAsByte<EAtlasPlayerDeathType> Type);
    
    UFUNCTION()
    void OnCarryTransitionBegin(EAtlasPlayerCarryTransitionType transitionType);
    
    UFUNCTION()
    void OnCarryTransitionAnimExitState(const FName& NotifyName);
    
    UFUNCTION()
    void OnBounceOffWall(FVector BounceVector);
    
    UFUNCTION()
    void OnAnimOverridePending(const FAtlasPlayerAnimOverrideParams& params);
    
    UFUNCTION()
    void OnAnimOverrideExitState(const FName& NotifyName);
    
    UFUNCTION()
    void OnAnimOverrideEnterState(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyHungrySuppressLookAround(const FName& NotifyName);
    
    UFUNCTION(BlueprintPure)
    bool MovementModeIs(TEnumAsByte<ETarMovementMode> Mode) const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpPreparing() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAnimatingSlope() const;
    
protected:
    UFUNCTION()
    void IdleFlavourAnimationExitState(const FName& NotifyName);
    
    UFUNCTION()
    void IdleFlavourAnimationEnterState(const FName& NotifyName);
    
    UFUNCTION(BlueprintPure)
    bool GrabTypeIs(TEnumAsByte<EAtlasGrabbableType> Type) const;
    
    UFUNCTION(BlueprintPure)
    bool GrabPhaseIs(TEnumAsByte<EAtlasPlayerGrabPhase> phase) const;
    
public:
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EAtlasLimb> GetWalkCycleFoot() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetStandIdleAnimation() const;
    
public:
    UFUNCTION()
    FVector2D GetLighterLookRotationAngles() const;
    
protected:
    UFUNCTION()
    void ExitLandState(const FName& NotifyName);
    
};

