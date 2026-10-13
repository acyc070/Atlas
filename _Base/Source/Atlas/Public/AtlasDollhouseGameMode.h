#pragma once
#include "CoreMinimal.h"
#include "AtlasBaseGameMode.h"
#include "AtlasDollhouseGameMode.generated.h"

class UAtlasDataSingleton;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API AAtlasDollhouseGameMode : public AAtlasBaseGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasDataSingleton* GlobalData;
    
public:
    AAtlasDollhouseGameMode(const FObjectInitializer& ObjectInitializer);

};

