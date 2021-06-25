// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"  // This seems to smooth out the macros
#include "GAS_AttributeSet.generated.h"


// Macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class MEATLOAF_API UGAS_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UGAS_AttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/* ATTRIBUTES */
	/* Health */
	UPROPERTY(BlueprintReadOnly, Category="Attributes", ReplicatedUsing=OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGAS_AttributeSet, Health);

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	/* Jump power */
	UPROPERTY(BlueprintReadOnly, Category="Attributes", ReplicatedUsing=OnRep_JumpPower)
	FGameplayAttributeData JumpPower;
	ATTRIBUTE_ACCESSORS(UGAS_AttributeSet, JumpPower);

	UFUNCTION()
    virtual void OnRep_JumpPower(const FGameplayAttributeData& OldJumpPower);
};
