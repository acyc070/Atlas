#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "EAtlasHDRumbleType.h"
#include "ETarVibrationEventCurve.h"
#include "AtlasPlayerController.generated.h"

class AAtlasPlayer;
class AAtlasPlayerCameraManager;
class UAtlasPlayerAnimInstance;
class UAtlasPlayerControllerState;

UCLASS(Blueprintable)
class ATLAS_API AAtlasPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* AtlasPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerAnimInstance* AtlasPlayerAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayerCameraManager* AtlasPlayerCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerControllerState* ControllerState;
    
public:
    AAtlasPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void RestartCheckpoint();
    
protected:
    UFUNCTION(Exec)
    void KillPlayer(int32 deathType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHdRumbleSupported(EAtlasHDRumbleType rumble) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetLookAroundInputVector() const;
    
    UFUNCTION(Exec)
    void DumpSaveData(int32 Type);
    
    UFUNCTION(Exec)
    void ChangeAnimationDebugTarget(const FString& NameOfObject);
    
    UFUNCTION(BlueprintCallable)
    void AddVibrationEvent_Old(uint8 SmallMotor, uint8 LargeMotor, float Duration, TEnumAsByte<ETarVibrationEventCurve> Curve);
    
    UFUNCTION(BlueprintCallable)
    void AddHdRumbleEvent(EAtlasHDRumbleType rumble, float Left, float Right);
    
};

