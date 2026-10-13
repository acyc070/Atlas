#include "AtlasBasicAICharacter.h"
#include "Engine/EngineTypes.h"
#include "TarAnimationListenerComponent.h"

AAtlasBasicAICharacter::AAtlasBasicAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationYaw = false;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->BaseAvoidanceStrength = 450.00f;
    this->BaseAvoidanceFalloff = 1.50f;
    this->PathNodeAcceptanceRadius = 35.00f;
    this->bAvoidanceEnabled = true;
    this->CharacterAnimInstance = NULL;
    this->AnimationListenerComponent = CreateDefaultSubobject<UTarAnimationListenerComponent>(TEXT("AnimationListenerComponent"));
    this->bWasThrown = false;
    this->NodeToInteractWith = NULL;
}

void AAtlasBasicAICharacter::StopAIMovement() {
}

void AAtlasBasicAICharacter::StartAIMovement() {
}

void AAtlasBasicAICharacter::SetMoveSpeed(float aNewMoveSpeed) {
}

void AAtlasBasicAICharacter::OnStartedInjectedAnim(AAtlasBasicAICharacter* CharOwner, UAtlasBasicAIAnimInstance* AnimInstance) {
}

void AAtlasBasicAICharacter::OnFinishedInjectedAnim(AAtlasBasicAICharacter* CharOwner, UAtlasBasicAIAnimInstance* AnimInstance) {
}

void AAtlasBasicAICharacter::OnAnimNotify(const FName& aNotify) {
}

bool AAtlasBasicAICharacter::MoveToNode(AAtlasBasicAINode* NodeToMoveTo, float InteractRadius, float Speed, bool bCanInterrupt) {
    return false;
}

void AAtlasBasicAICharacter::Move(float DeltaTime) {
}

bool AAtlasBasicAICharacter::LeaveActiveNode() {
    return false;
}

bool AAtlasBasicAICharacter::HasPath() const {
    return false;
}

float AAtlasBasicAICharacter::GetMoveSpeed() const {
    return 0.0f;
}

void AAtlasBasicAICharacter::AddAvoidanceLocation(FName AvoidanceName, FVector aLocationToAvoid, float aTimeout) {
}

void AAtlasBasicAICharacter::AddAvoidanceActor(AActor* anActorToAvoid, float aTimeout) {
}


