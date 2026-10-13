#pragma once
#include "CoreMinimal.h"
#include "BikSolverTask.h"
#include "BikTaskConfig.h"
#include "BikTaskProperties.h"
#include "EBikTaskIdentifier.h"
#include "Components/ActorComponent.h"
#include "BikRetargetingComponent.generated.h"

class UAnimInstance;
class UBIKRig;
class UBIKRigTargetTransformGoalComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UBikRetargetingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBIKRig* BIKRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkeletalMeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreIKSavedPoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* AnimBpClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikTaskConfig TaskMap[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigTargetTransformGoalComponent* LeftHandGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigTargetTransformGoalComponent* RightHandGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigTargetTransformGoalComponent* LeftFootGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigTargetTransformGoalComponent* RightFootGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigTargetTransformGoalComponent* LeftAnkleGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigTargetTransformGoalComponent* RightAnkleGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigTargetTransformGoalComponent* LeftToeGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigTargetTransformGoalComponent* RightToeGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBIKRigTargetTransformGoalComponent* HipsGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBIKRigTargetTransformGoalComponent*> AllBikGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBIKRigTargetTransformGoalComponent*> FullBodyGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBIKRigTargetTransformGoalComponent*> FootPlacementGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBIKRigTargetTransformGoalComponent*> FootStabilizationGoals;
    
    UBikRetargetingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FBikSolverTask SetupTask(EBikTaskIdentifier TaskId, bool DebugDraw);
    
    UFUNCTION(BlueprintPure)
    FBikTaskProperties GetTaskProperties(EBikTaskIdentifier TaskId) const;
    
    UFUNCTION(BlueprintPure)
    FBikSolverTask GetPoleVectorTaskSetup() const;
    
    UFUNCTION(BlueprintPure)
    FBikSolverTask GetDisabledTaskSetup() const;
    
};

