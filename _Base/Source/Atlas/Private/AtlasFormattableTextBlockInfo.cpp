#include "AtlasFormattableTextBlockInfo.h"

FAtlasFormattableTextBlockInfo::FAtlasFormattableTextBlockInfo() {
    this->ParameterType = EAtlasFormatParameter::ControlTexture;
    this->Control = PCTRL_RUN;
    this->Control2D = PCTRL2D_MOVE;
    this->UIAction = AtlasUIAction::None;
    this->Scale = 0.00f;
    this->bGamepadOnly = false;
}

