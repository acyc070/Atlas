#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DLCLevelUnlockedDelegate.h"
#include "DLCStoreSignatureDelegate.h"
#include "DollhouseExitSignatureDelegate.h"
#include "DollhouseNewRoomInFocusDelegate.h"
#include "DollhousePLVLToSubLevelMap.h"
#include "DollhouseRoomRow.h"
#include "DollhouseSelectSignatureDelegate.h"
#include "DollhouseZoomSignatureDelegate.h"
#include "AtlasDollhouseRoomManager.generated.h"

UCLASS(Blueprintable)
class ATLAS_API AAtlasDollhouseRoomManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDollhousePLVLToSubLevelMap> PLVLToSubLevelMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCLevelUnlocked OnDLCLevelUnlocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDollhouseRoomRow> DollhouseRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLookAroundAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAroundSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSwitchingRoomsWhenZoomed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveVerticalAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveHorizontalAllowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDollhouseNewRoomInFocus OnDollhouseFocusedRoomChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDollhouseSelectSignature OnDollhouseSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCStoreSignature OnOpenDLCStore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDollhouseExitSignature OnDollhouseExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDollhouseZoomSignature OnDollhouseZoomEvent;
    
public:
    AAtlasDollhouseRoomManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void MoveVertical(float Value);
    
    UFUNCTION()
    void MoveHorizontal(float Value);
    
    UFUNCTION()
    void LookVertical(float Value);
    
    UFUNCTION()
    void LookHorizontal(float Value);
    
public:
    UFUNCTION(BlueprintPure)
    FName GetCorrespondingSubLevel(const FName& PLVL);
    
private:
    UFUNCTION()
    void DollhouseTriggerZoom(float Value);
    
    UFUNCTION()
    void DollhouseSelect();
    
    UFUNCTION()
    void DollhouseExit();
    
    UFUNCTION()
    void CheckRoomsUnlocked();
    
};

