#pragma once
#include "CoreMinimal.h"
#include "InputProjectSettingsObjectVariables.generated.h"

class UCurveFloat;
class UDataTable;

USTRUCT(BlueprintType)
struct ATLAS_API FInputProjectSettingsObjectVariables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ControllerInputProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PS4ToXBoxForceFeedbackVibrationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PS4ToXBoxForceFeedbackVibrationCurveContinuous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PS4ToSwitchForceFeedbackVibrationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PS4ToSwitchForceFeedbackVibrationCurveContinuous;
    
    FInputProjectSettingsObjectVariables();
};

