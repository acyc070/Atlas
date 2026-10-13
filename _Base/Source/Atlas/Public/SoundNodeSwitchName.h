#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SoundNodeSwitchName.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeSwitchName : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PinNames;
    
    USoundNodeSwitchName();

};

