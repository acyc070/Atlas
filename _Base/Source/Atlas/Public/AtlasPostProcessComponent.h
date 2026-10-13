#pragma once
#include "CoreMinimal.h"
#include "Components/PostProcessComponent.h"
#include "AtlasPostProcessComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAtlasPostProcessComponent : public UPostProcessComponent {
    GENERATED_BODY()
public:
    UAtlasPostProcessComponent(const FObjectInitializer& ObjectInitializer);

protected:
    virtual void OnRegister() override;
    virtual void OnUnregister() override;
    virtual void Serialize(FArchive& Ar) override;
};