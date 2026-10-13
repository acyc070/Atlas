#include "AtlasPostProcessComponent.h"
#include "Engine/World.h"          // for UWorld::InsertPostProcessVolume / RemovePostProcessVolume

UAtlasPostProcessComponent::UAtlasPostProcessComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UAtlasPostProcessComponent::OnRegister()
{
    // NOTE: We deliberately skip UPostProcessComponent::OnRegister here.
    // UPostProcessComponent is MinimalAPI, so its OnRegister/OnUnregister/Serialize
    // are not exported from the Engine DLL and cannot be linked from the Atlas module.
    // We call USceneComponent::OnRegister directly (which IS exported) and then
    // replicate the base class's post-process-volume registration by hand.
    USceneComponent::OnRegister();

    if (UWorld* World = GetWorld())
    {
        World->InsertPostProcessVolume(this);
    }
}

void UAtlasPostProcessComponent::OnUnregister()
{
    if (UWorld* World = GetWorld())
    {
        World->RemovePostProcessVolume(this);
    }

    USceneComponent::OnUnregister();
}

void UAtlasPostProcessComponent::Serialize(FArchive& Ar)
{
    USceneComponent::Serialize(Ar);

    if (Ar.IsLoading())
    {
#if WITH_EDITORONLY_DATA
        Settings.OnAfterLoad();
#endif
    }
}