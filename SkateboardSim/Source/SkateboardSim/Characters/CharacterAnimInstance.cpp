#include "CharacterAnimInstance.h"
#include "SkateBoardCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCharacterAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    SkateboardCharacter = Cast<ASkateBoardCharacter>(TryGetPawnOwner());
}

void UCharacterAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
    Super::NativeUpdateAnimation(DeltaTime);

    if(SkateboardCharacter == nullptr)
    {
        SkateboardCharacter = Cast<ASkateBoardCharacter>(TryGetPawnOwner());
    }

    if(SkateboardCharacter == nullptr) { return; }

    FVector Velocity = SkateboardCharacter->GetVelocity();

    bIsInAir = SkateboardCharacter->GetCharacterMovement()->IsFalling();
}
