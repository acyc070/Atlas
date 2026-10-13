#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtlasAINodeVolume.generated.h"

class AAtlasAINode;

UCLASS(Blueprintable)
class ATLAS_API AAtlasAINodeVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AAtlasAINode>> Nodes;
    
public:
    AAtlasAINodeVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabledOnNodes(const bool Enabled);
    
protected:
    UFUNCTION()
    void GetAllNodes();
    
};

