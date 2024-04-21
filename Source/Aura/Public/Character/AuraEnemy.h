// Copyright 2024 - Jacob Nguyen

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

	/* Enemy Interface Functions */
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;
	/* end Enemy Interface Functions */

protected:
	virtual void BeginPlay() override;
	

};
