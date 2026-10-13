#include "AtlasPlatformTexturesConfig.h"

UAtlasPlatformTexturesConfig::UAtlasPlatformTexturesConfig() {
    this->InputType = EAtlasInputType::KeyboardAndMouse;
    this->DefaultTexture = NULL;
    this->PS5ControllerInstructionsTexture = NULL;
}

UTexture2D* UAtlasPlatformTexturesConfig::GetUIActionTexture(AtlasUIAction Action) const {
    return NULL;
}

UTexture2D* UAtlasPlatformTexturesConfig::GetNamedTexture(FName Name) const {
    return NULL;
}

FString UAtlasPlatformTexturesConfig::GetMappedCharacter(FKey Key) const {
    return TEXT("");
}

UTexture2D* UAtlasPlatformTexturesConfig::GetKeyTexture(FKey Key) const {
    return NULL;
}

FKey UAtlasPlatformTexturesConfig::GetKeyForControlTexture2D(TEnumAsByte<EAtlasPlayerControl2D> Control, EAtlasInputDirections Direction) const {
    return FKey{};
}

FKey UAtlasPlatformTexturesConfig::GetKeyForControlTexture(TEnumAsByte<EAtlasPlayerControl> Control) const {
    return FKey{};
}

UTexture2D* UAtlasPlatformTexturesConfig::GetControlTexture(TEnumAsByte<EAtlasPlayerControl> Control) const {
    return NULL;
}

UTexture2D* UAtlasPlatformTexturesConfig::GetControl2DTexture(TEnumAsByte<EAtlasPlayerControl2D> Control, EAtlasInputDirections Direction) const {
    return NULL;
}


