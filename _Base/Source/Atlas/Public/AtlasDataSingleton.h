#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlasDLCInfoUpdatedDelegate.h"
#include "OnConfigVariablesChangedDelegate.h"
#include "AtlasDataSingleton.generated.h"

class UAtlasComplianceLayer;
class UAtlasDataSingleton;
class UAtlasSaveSlotsManager;

UCLASS(Blueprintable)
class UAtlasDataSingleton : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasRespawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasSaveSlotsManager* SaveSlotsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasComplianceLayer* ComplianceLayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCInfoUpdated OnDLCInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConfigVariablesChanged OnConfigVariablesChanged;
    
    UAtlasDataSingleton();

    UFUNCTION(BlueprintCallable)
    void SetConfigVariable_Int(const FString& aVariableName, int32 aValue);
    
    UFUNCTION(BlueprintCallable)
    void SetConfigVariable_Float(const FString& aVariableName, float aValue);
    
    UFUNCTION(BlueprintCallable)
    void SetConfigVariable_Bool(const FString& aVariableName, bool aValue);
    
    UFUNCTION(BlueprintPure)
    static UAtlasDataSingleton* GetDataSingleton();
    
    UFUNCTION(BlueprintPure)
    bool GetConfigVariable_Int(const FString& aVariableName, int32& aValue);
    
    UFUNCTION(BlueprintPure)
    bool GetConfigVariable_Float(const FString& aVariableName, float& aValue);
    
    UFUNCTION(BlueprintPure)
    bool GetConfigVariable_Bool(const FString& aVariableName, bool& aValue);
    
};

