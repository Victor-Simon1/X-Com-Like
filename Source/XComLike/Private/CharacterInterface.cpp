// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterInterface.h"

// Add default functionality here for any ICharacterInterface functions that are not pure virtual.

void ICharacterInterface::RecoveryHP(double healing)
{
	if (this->hp + heal > this->hpMax) {
		this->hp = this->hpMax;
	}
	else {
		this->hp += heal;
	}
}

void ICharacterInterface::TakeDmg(double dmg)
{
	this->atk += dmg;
}


