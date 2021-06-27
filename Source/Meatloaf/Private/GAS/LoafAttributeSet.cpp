// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/LoafAttributeSet.h"
#include "Net/UnrealNetwork.h"


ULoafAttributeSet::ULoafAttributeSet()
{
	
}

void ULoafAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, CharacterLevel, COND_None, REPNOTIFY_Always);
	
	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	
	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, JumpPower, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, MaxJumpPower, COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, CurrentJumps, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, MaxJumps, COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, MoveAccel, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, MaxMoveSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, SprintAccel, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULoafAttributeSet, MaxSprintMoveSpeed, COND_None, REPNOTIFY_Always);
}


void ULoafAttributeSet::OnRep_CharacterLevel(const FGameplayAttributeData& OldCharacterLevel)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, CharacterLevel, OldCharacterLevel);
}


void ULoafAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, Health, OldHealth);
}

void ULoafAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, MaxHealth, OldMaxHealth);
}


void ULoafAttributeSet::OnRep_JumpPower(const FGameplayAttributeData& OldJumpPower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, JumpPower, OldJumpPower);
}

void ULoafAttributeSet::OnRep_MaxJumpPower(const FGameplayAttributeData& OldMaxJumpPower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, MaxJumpPower, OldMaxJumpPower);
}


void ULoafAttributeSet::OnRep_CurrentJumps(const FGameplayAttributeData& OldCurrentJumps)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, CurrentJumps, OldCurrentJumps);
}

void ULoafAttributeSet::OnRep_MaxJumps(const FGameplayAttributeData& OldMaxJumps)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, MaxJumps, OldMaxJumps);
}


void ULoafAttributeSet::OnRep_MoveAccel(const FGameplayAttributeData& OldMoveAccel)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, MoveAccel, OldMoveAccel);
}

void ULoafAttributeSet::OnRep_MaxMoveSpeed(const FGameplayAttributeData& OldMaxMoveSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, MaxMoveSpeed, OldMaxMoveSpeed);
}

void ULoafAttributeSet::OnRep_SprintAccel(const FGameplayAttributeData& OldSprintAccel)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, SprintAccel, OldSprintAccel);
}

void ULoafAttributeSet::OnRep_MaxSprintMoveSpeed(const FGameplayAttributeData& OldMaxSprintMoveSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULoafAttributeSet, MaxSprintMoveSpeed, OldMaxSprintMoveSpeed);
}
