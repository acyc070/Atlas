#include "AtlasStateBlock.h"

UAtlasStateBlock::UAtlasStateBlock() {
}

void UAtlasStateBlock::TeleportActorToTransform(AActor* Actor, const FString& Key) {
}

void UAtlasStateBlock::SetVector(FVector Value, const FString& Key) {
}

void UAtlasStateBlock::SetTransformFromActor(AActor* Actor, const FString& Key) {
}

void UAtlasStateBlock::SetTransform(const FTransform& NewTransform, const FString& Key) {
}

void UAtlasStateBlock::SetString(const FString& Value, const FString& Key) {
}

void UAtlasStateBlock::SetInteger(int32 Value, const FString& Key) {
}

void UAtlasStateBlock::SetFloat(float Value, const FString& Key) {
}

void UAtlasStateBlock::SetBool(bool Value, const FString& Key) {
}

bool UAtlasStateBlock::KeyExists(const FString& Key) {
    return false;
}

FVector UAtlasStateBlock::GetVectorDefaulted(const FString& Key, FVector DefaultValue) {
    return FVector{};
}

FVector UAtlasStateBlock::GetVector(const FString& Key) {
    return FVector{};
}

FTransform UAtlasStateBlock::GetTransformDefaulted(const FString& Key, const FTransform& DefaultValue) {
    return FTransform{};
}

FTransform UAtlasStateBlock::GetTransform(const FString& Key) {
    return FTransform{};
}

FString UAtlasStateBlock::GetStringDefaulted(const FString& Key, const FString& DefaultValue) {
    return TEXT("");
}

FString UAtlasStateBlock::GetString(const FString& Key) {
    return TEXT("");
}

int32 UAtlasStateBlock::GetIntegerDefaulted(const FString& Key, int32 DefaultValue) {
    return 0;
}

int32 UAtlasStateBlock::GetInteger(const FString& Key) {
    return 0;
}

float UAtlasStateBlock::GetFloatDefaulted(const FString& Key, float DefaultValue) {
    return 0.0f;
}

float UAtlasStateBlock::GetFloat(const FString& Key) {
    return 0.0f;
}

bool UAtlasStateBlock::GetBoolDefaulted(const FString& Key, bool DefaultValue) {
    return false;
}

bool UAtlasStateBlock::GetBool(const FString& Key) {
    return false;
}


