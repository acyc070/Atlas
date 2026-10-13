#pragma once
#include "CoreMinimal.h"
#include "AtlasRoomAddedToWorldSignatureDelegate.generated.h"

class AAtlasRoomVolumeBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasRoomAddedToWorldSignature, AAtlasRoomVolumeBase*, AddedVolume);

