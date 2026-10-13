#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/PlayerCameraManager.h"
#include "PotentialCameraTarget.h"
#include "AtlasPlayerCameraManager.generated.h"

class AActor;
class AAtlasCameraVolume;
class UObject;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API AAtlasPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExternalCamera;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPotentialCameraTarget> ViewTargetStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasCameraVolume* ActiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasCameraVolume* StickyVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastRotation;
    
public:
    AAtlasPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartBlend(TEnumAsByte<EViewTargetBlendFunction> func, float BlendTime, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalWithBlend(AActor* external, TEnumAsByte<EViewTargetBlendFunction> func, float BlendTime, float BlendExp, bool keepActiveRoomVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetExternal(AActor* external, bool keepActiveRoomVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraZoomModifier(float Amount, UObject* requester);
    
    UFUNCTION(BlueprintPure)
    FRotator GetSeawavesRotation() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearExternalWithBlend(TEnumAsByte<EViewTargetBlendFunction> func, float BlendTime, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void ClearExternal();
    
};

