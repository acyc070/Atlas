#include "AtlasState.h"

UAtlasState::UAtlasState() {
}

void UAtlasState::TeleportActorToTransform(AActor* Actor, const FString& Parent, const FString& Key) {
}

void UAtlasState::SetVector(FVector Value, const FString& Parent, const FString& Key) {
}

void UAtlasState::SetTransformFromActor(AActor* Actor, const FString& Parent, const FString& Key) {
}

void UAtlasState::SetTransform(const FTransform& NewTransform, const FString& Parent, const FString& Key) {
}

void UAtlasState::SetString(const FString& Value, const FString& Parent, const FString& Key) {
}

void UAtlasState::SetInteger(int32 Value, const FString& Parent, const FString& Key) {
}

void UAtlasState::SetFloat(float Value, const FString& Parent, const FString& Key) {
}

void UAtlasState::SetCollectible(FName Name) {
}

void UAtlasState::SetBool(bool Value, const FString& Parent, const FString& Key) {
}

void UAtlasState::SaveState(UObject* WorldContext) {
}

UAtlasStateBlock* UAtlasState::NewBlock(const FString& Owner) {
    return NULL;
}

void UAtlasState::LoadState(UObject* WorldContext) {
}

bool UAtlasState::KeyExists(const FString& Parent, const FString& Key) {
    return false;
}

bool UAtlasState::HasCollectible(FName Name) {
    return false;
}

FVector UAtlasState::GetVectorDefaulted(const FString& Parent, const FString& Key, FVector DefaultValue) {
    return FVector{};
}

FVector UAtlasState::GetVector(const FString& Parent, const FString& Key) {
    return FVector{};
}

FTransform UAtlasState::GetTransformDefaulted(const FString& Parent, const FString& Key, const FTransform& DefaultValue) {
    return FTransform{};
}

FTransform UAtlasState::GetTransform(const FString& Parent, const FString& Key) {
    return FTransform{};
}

FString UAtlasState::GetStringDefaulted(const FString& Parent, const FString& Key, const FString& DefaultValue) {
    return TEXT("");
}

FString UAtlasState::GetString(const FString& Parent, const FString& Key) {
    return TEXT("");
}

int32 UAtlasState::GetIntegerDefaulted(const FString& Parent, const FString& Key, int32 DefaultValue) {
    return 0;
}

int32 UAtlasState::GetInteger(const FString& Parent, const FString& Key) {
    return 0;
}

float UAtlasState::GetFloatDefaulted(const FString& Parent, const FString& Key, float DefaultValue) {
    return 0.0f;
}

float UAtlasState::GetFloat(const FString& Parent, const FString& Key) {
    return 0.0f;
}

bool UAtlasState::GetBoolDefaulted(const FString& Parent, const FString& Key, bool DefaultValue) {
    return false;
}

bool UAtlasState::GetBool(const FString& Parent, const FString& Key) {
    return false;
}


