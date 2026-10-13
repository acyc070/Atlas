#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AtlasStateBlock.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATLAS_API UAtlasStateBlock : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Owner;
    
    UAtlasStateBlock();

    UFUNCTION(BlueprintCallable)
    void TeleportActorToTransform(AActor* Actor, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetVector(FVector Value, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformFromActor(AActor* Actor, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetTransform(const FTransform& NewTransform, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetString(const FString& Value, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetInteger(int32 Value, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetFloat(float Value, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetBool(bool Value, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    bool KeyExists(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVectorDefaulted(const FString& Key, FVector DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVector(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTransformDefaulted(const FString& Key, const FTransform& DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTransform(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    FString GetStringDefaulted(const FString& Key, const FString& DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    FString GetString(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    int32 GetIntegerDefaulted(const FString& Key, int32 DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInteger(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    float GetFloatDefaulted(const FString& Key, float DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    float GetFloat(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolDefaulted(const FString& Key, bool DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetBool(const FString& Key);
    
};

