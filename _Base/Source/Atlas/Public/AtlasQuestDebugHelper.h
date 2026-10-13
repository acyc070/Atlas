#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasQuestDebugHelper.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasQuestDebugHelper : public UActorComponent {
    GENERATED_BODY()
public:
    UAtlasQuestDebugHelper(const FObjectInitializer& ObjectInitializer);

};

