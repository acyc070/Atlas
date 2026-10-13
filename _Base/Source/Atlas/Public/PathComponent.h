#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PathData.h"
#include "PathComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UPathComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathData MyPathData;
    
    UPathComponent(const FObjectInitializer& ObjectInitializer);

};

