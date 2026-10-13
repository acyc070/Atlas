#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DLCLevelStruct.h"
#include "EAtlasDLC.h"
#include "AtlasDLCLevels.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasDLCLevels : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDLCLevelStruct> DLCLevels;
    
    UAtlasDLCLevels();

    UFUNCTION(BlueprintPure)
    bool IsDLCLevel(const FName& InLevel);
    
    UFUNCTION(BlueprintPure)
    EAtlasDLC GetDLCEnum(const FName& InLevel);
    
};

