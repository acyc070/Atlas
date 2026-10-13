#include "AtlasPhysicsInterfaceComponent.h"

UAtlasPhysicsInterfaceComponent::UAtlasPhysicsInterfaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverImpact = true;
    this->bCanEverSlide = true;
    this->bCanEverRoll = true;
    this->EnableImpactsAfterSeconds = 0.50f;
    this->SpeedMax = 800.00f;
    this->SpeedSmoothTime = 0.20f;
    this->SpeedRaw = 0.00f;
    this->SpeedRawSmooth = 0.00f;
    this->SpeedSlideSmooth = 0.00f;
    this->Speed = 0.00f;
    this->SpeedSmooth = 0.00f;
    this->AngularMax = 800.00f;
    this->AngularSmoothTime = 0.20f;
    this->AngularRaw = 0.00f;
    this->Angular = 0.00f;
    this->AngularRawSmooth = 0.00f;
    this->AngularSmooth = 0.00f;
    this->ImpactMax = 20000.00f;
    this->ImpactThreshold = 1200.00f;
    this->ImpactCooldown = 0.30f;
    this->LastImpactForce = 0.00f;
    this->LastImpactForceRaw = 0.00f;
    this->TimeSinceLastHit = 340282346638528859811704183484516925440.00f;
    this->TimeSinceGroundHit = 0.00f;
    this->IsRolling = false;
    this->TimeOnGroundBeforeRolling = 0.20f;
    this->MinAngularSpeedToBeRolling = 100.00f;
    this->MaxGroundDistanceToBeRolling = 1.00f;
    this->RollFactor = 0.00f;
    this->IsSliding = false;
    this->SlideFactor = 0.00f;
    this->TimeOnGroundBeforeSliding = 0.20f;
    this->MinLinearSpeedToBeSliding = 100.00f;
    this->MaxAngularSpeedToStartSliding = 30.00f;
    this->State = EAtlasPhysicsInterfaceState::NONE;
    this->StateChangeCooldown = 0.50f;
    this->TimeOnGround = 0.00f;
    this->MaxGroundDistanceToBeGrounded = 10.00f;
    this->AlwaysGrounded = false;
    this->Enabled = true;
    this->IgnoreBSPs = false;
    this->ImpactVelocityThreshold = 1.00f;
    this->IsOnGround = false;
    this->PrintImpact = false;
    this->PrintSpeed = false;
    this->PrintAngular = false;
    this->PrintState = false;
}

void UAtlasPhysicsInterfaceComponent::OnComponentHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


