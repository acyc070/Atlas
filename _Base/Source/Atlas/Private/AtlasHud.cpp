#include "AtlasHud.h"

AAtlasHud::AAtlasHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
}

void AAtlasHud::FadeScreen(float FadeTime, float afterADelayOf, EFadeState FadeMode, USoundMix* SoundMix) {
}

void AAtlasHud::DrawTextAligned(const FString& Text, FLinearColor TextColor, FVector2D ScreenPosition, FVector2D Alignment, UFont* Font, float Scale) {
}


