#include "AtlasDataSingleton.h"

UAtlasDataSingleton::UAtlasDataSingleton() {
    this->WasRespawned = false;
}

void UAtlasDataSingleton::SetConfigVariable_Int(const FString& aVariableName, int32 aValue) {
}

void UAtlasDataSingleton::SetConfigVariable_Float(const FString& aVariableName, float aValue) {
}

void UAtlasDataSingleton::SetConfigVariable_Bool(const FString& aVariableName, bool aValue) {
}

UAtlasDataSingleton* UAtlasDataSingleton::GetDataSingleton() {
    return NULL;
}

bool UAtlasDataSingleton::GetConfigVariable_Int(const FString& aVariableName, int32& aValue) {
    return false;
}

bool UAtlasDataSingleton::GetConfigVariable_Float(const FString& aVariableName, float& aValue) {
    return false;
}

bool UAtlasDataSingleton::GetConfigVariable_Bool(const FString& aVariableName, bool& aValue) {
    return false;
}


