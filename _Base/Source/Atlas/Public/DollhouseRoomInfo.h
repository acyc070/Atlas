#pragma once
#include "CoreMinimal.h"
#include "EAtlasDLC.h"
#include "ELevel.h"
#include "DollhouseRoomInfo.generated.h"

class ACameraActor;

USTRUCT(BlueprintType)
struct ATLAS_API FDollhouseRoomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasDLC RequiredDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasDLC StoreViewDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevel Level;
    
    FDollhouseRoomInfo();
};

