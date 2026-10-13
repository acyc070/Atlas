#pragma once
#include "CoreMinimal.h"
#include "AtlasWidget.h"
#include "AtlasMenuWidget.generated.h"

class UAtlasMenuManager;

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasMenuWidget : public UAtlasWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCredits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsControllerDisconnect;
    
    UAtlasMenuWidget();

    UFUNCTION(BlueprintNativeEvent)
    void OnVisible();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInvisible();
    
    UFUNCTION(BlueprintPure)
    UAtlasMenuManager* GetMenuManager() const;
    
};

