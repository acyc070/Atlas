#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasPlayerCustomizationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerCustomizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverBeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDlcCharacter;
    
    UAtlasPlayerCustomizationComponent(const FObjectInitializer& ObjectInitializer);

};

