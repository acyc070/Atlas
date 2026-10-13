#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BIKRigJointConstraint.generated.h"

UCLASS(Abstract, Blueprintable)
class BIKRIG_API UBIKRigJointConstraint : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
public:
    UBIKRigJointConstraint();

    UFUNCTION(BlueprintPure)
    FName GetBoneName() const;
    
};

