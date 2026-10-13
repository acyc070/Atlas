#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CollectibleInfo.h"
#include "ECollectibleType.h"
#include "ELevel.h"
#include "CollectiblesHelper.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ATLAS_API UCollectiblesHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCollectiblesHelper();

    UFUNCTION(BlueprintCallable)
    static void ReleaseCollectibleTextures();
    
    UFUNCTION(BlueprintCallable)
    static void PreloadCollectibleTextures();
    
    UFUNCTION(BlueprintPure)
    static bool IsCollectibleUnlocked(const FName& Name);
    
    UFUNCTION(BlueprintPure)
    static int32 GetTotalNumberOfUnlockedCollectibles(ECollectibleType Type);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumberOfUnlockedCollectiblesByLevel(ELevel InLevel, ECollectibleType Type);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumberOfConceptArtCollectibles();
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumberOfCollectiblesToUnlock(ECollectibleType Type);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumberOfCollectiblesByLevel(ELevel InLevel, ECollectibleType Type);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumberOfCollectiblesByGroup(ECollectibleType Type);
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetCollectiblesDataTable();
    
    UFUNCTION(BlueprintPure)
    static FCollectibleInfo GetCollectibleByNameFromDataTable(const FName& Name);
    
    UFUNCTION(BlueprintPure)
    static TArray<FCollectibleInfo> GetAllUnlockedCollectiblesByLevel(ELevel InLevel, ECollectibleType Type);
    
    UFUNCTION(BlueprintPure)
    static TArray<FCollectibleInfo> GetAllUnlockedCollectiblesByGroup(ECollectibleType Type);
    
    UFUNCTION(BlueprintPure)
    static TArray<FCollectibleInfo> GetAllUnlockedCollectibles();
    
    UFUNCTION(BlueprintPure)
    static TArray<FCollectibleInfo> GetAllConceptArtCollectiblesFromDataTable();
    
    UFUNCTION(BlueprintPure)
    static TArray<FCollectibleInfo> GetAllCollectiblesByGroupFromDataTable(ECollectibleType Type);
    
};

