#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "AtlasState.generated.h"

class AActor;
class UAtlasStateBlock;
class UObject;

UCLASS(Blueprintable)
class ATLAS_API UAtlasState : public USaveGame {
    GENERATED_BODY()
public:
    UAtlasState();

    UFUNCTION(BlueprintCallable)
    void TeleportActorToTransform(AActor* Actor, const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetVector(FVector Value, const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformFromActor(AActor* Actor, const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetTransform(const FTransform& NewTransform, const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetString(const FString& Value, const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetInteger(int32 Value, const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetFloat(float Value, const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectible(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetBool(bool Value, const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void SaveState(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    UAtlasStateBlock* NewBlock(const FString& Owner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void LoadState(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool KeyExists(const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    bool HasCollectible(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVectorDefaulted(const FString& Parent, const FString& Key, FVector DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVector(const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTransformDefaulted(const FString& Parent, const FString& Key, const FTransform& DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTransform(const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    FString GetStringDefaulted(const FString& Parent, const FString& Key, const FString& DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    FString GetString(const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    int32 GetIntegerDefaulted(const FString& Parent, const FString& Key, int32 DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInteger(const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    float GetFloatDefaulted(const FString& Parent, const FString& Key, float DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    float GetFloat(const FString& Parent, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolDefaulted(const FString& Parent, const FString& Key, bool DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetBool(const FString& Parent, const FString& Key);
    
};

