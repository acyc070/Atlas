#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECultureEnum.h"
#include "LocConfigRow.h"
#include "TotalPlayTime.h"
#include "LocalizationHelpers.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ULocalizationHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocalizationHelpers();

    UFUNCTION(BlueprintPure)
    static FString GetTotalPlaytimeAsNiceString(const FTotalPlayTime& Playtime);
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetSaveFileInfoLocalizationTable();
    
    UFUNCTION(BlueprintPure)
    static FText GetLocalizedSaveFileInfoByName(const FName& Name);
    
    UFUNCTION(BlueprintPure)
    static FText GetLocalizedLevelName(const FName& Name);
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetLocalizationConfigTable();
    
    UFUNCTION(BlueprintPure)
    static FLocConfigRow GetCurrentLocaleConfig();
    
    UFUNCTION(BlueprintPure)
    static ECultureEnum GetCultureAsEnum();
    
};

