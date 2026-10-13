#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "AtlasUIAction.h"
#include "EAtlasInputDirections.h"
#include "EAtlasInputType.h"
#include "EAtlasPlayerControl.h"
#include "EAtlasPlayerControl2D.h"
#include "NewNameAndTitle.h"
#include "UIInputHelpers.generated.h"

class UAtlasPlatformTexturesConfig;
class UDataTable;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class UUIInputHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIInputHelpers();

    UFUNCTION(BlueprintCallable)
    static void SwitchOnUIAction(FKey Key, AtlasUIAction& Action);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerInputProfile(FName nameOfNewProfile);
    
    UFUNCTION(BlueprintCallable)
    static void ResetKeybindingsToDefault();
    
    UFUNCTION(BlueprintCallable)
    static bool IsKeyForbiddenToBind(FKey Key);
    
    UFUNCTION(BlueprintPure)
    static bool IsKeyAction(AtlasUIAction Action, FKey Key);
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetUIInputDataTable();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAtlasPlatformTexturesConfig* GetPlatformSpecificTexturesConfig(const UObject* WorldContextObject, bool overrideAutomaticInputType, EAtlasInputType InputType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPlatformAgnosticUIActionTexture(const UObject* WorldContextObject, AtlasUIAction Action, bool bForceGamepadInputType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPlatformAgnosticNamedTexture(const UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPlatformAgnosticControlTexture(const UObject* WorldContextObject, TEnumAsByte<EAtlasPlayerControl> Control);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPlatformAgnosticControl2DTexture(const UObject* WorldContextObject, TEnumAsByte<EAtlasPlayerControl2D> Control, EAtlasInputDirections Direction);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetMappedKeyForControlTexture2D(const UObject* WorldContextObject, TEnumAsByte<EAtlasPlayerControl2D> Control, EAtlasInputDirections Direction);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetMappedKeyForControlTexture(const UObject* WorldContextObject, TEnumAsByte<EAtlasPlayerControl> Control);
    
    UFUNCTION(BlueprintCallable)
    static FName GetGroupName(const FName& rowNamebool, bool useDLCCredits);
    
    UFUNCTION(BlueprintPure)
    static FKey GetFirstUIActionKey(AtlasUIAction Action, bool prioritizeGamepadKey);
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetCreditsScreenDataTable(bool useDLCCredits);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllCreditsScreenGroupNames(bool useDLCCredits);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FNewNameAndTitle> GetAllCreditsScreenGroupMembers(const FName& RowName, bool useDLCCredits);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllCreditsScreenGroupIDs(bool useDLCCredits);
    
    UFUNCTION(BlueprintPure)
    static AtlasUIAction GetAction(FKey Key);
    
};

