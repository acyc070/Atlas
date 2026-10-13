#pragma once
#include "CoreMinimal.h"
#include "AtlasWidget.h"
#include "OnAtlasSplashScreenEndedDelegate.h"
#include "OnAtlasSplashScreenMovieStartedDelegate.h"
#include "AtlasSplashScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasSplashScreenWidget : public UAtlasWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAtlasSplashScreenEnded OnSplashScreenEndedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAtlasSplashScreenMovieStarted OnSplashScreenMovieStartedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BetweenScreensTime;
    
public:
    UAtlasSplashScreenWidget();

private:
    UFUNCTION()
    void OnFadingOutEnded(UAtlasWidget* Widget);
    
    UFUNCTION()
    void OnFadingInEnded(UAtlasWidget* Widget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Launch(int32 StartingChildIndex);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetWidgetsCount() const;
    
};

