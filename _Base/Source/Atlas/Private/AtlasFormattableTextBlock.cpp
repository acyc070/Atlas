#include "AtlasFormattableTextBlock.h"

UAtlasFormattableTextBlock::UAtlasFormattableTextBlock() {
    this->TextType = EAtlasTextType::Normal;
    this->bGamepadOnly = false;
    this->FontSize = 24.00f;
    this->MarginBetweenWords = 5.00f;
    this->HorizontalBox = NULL;
}

bool UAtlasFormattableTextBlock::TryActualFormatting(const FText& textToFormat) {
    return false;
}


