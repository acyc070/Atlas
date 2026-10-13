#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Fonts/SlateFontInfo.h"
#include "AtlasTextTypeToFontMapping.h"
#include "ECultureEnum.h"
#include "LocConfigRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FLocConfigRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECultureEnum Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo BackupFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackupFontSizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasTextTypeToFontMapping> FontsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UIInputConfigTable;
    
    ATLAS_API FLocConfigRow();
};

