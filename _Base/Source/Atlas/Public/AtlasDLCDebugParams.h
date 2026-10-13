#pragma once
#include "CoreMinimal.h"
#include "EAtlasDLC.h"
#include "AtlasDLCDebugParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasDLCDebugParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceOwnAllDLCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceOwnListOfDLCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAtlasDLC> OwnedDLCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectedMask;
    
    ATLAS_API FAtlasDLCDebugParams();
};

