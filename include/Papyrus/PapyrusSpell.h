#pragma once

#include "main.h"


namespace papyrusSpell
{
	using VM = RE::BSScript::IVirtualMachine;
	using StackID = RE::VMStackID;
	using Severity = RE::BSScript::ErrorLogger::Severity;


	void AddMagicEffectToSpell(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::SpellItem* a_spell, RE::EffectSetting* a_mgef, float a_mag, UInt32 a_area, UInt32 a_dur, float a_cost, std::vector<RE::BSFixedString> a_conditionList);

	SInt32 GetSpellType(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::SpellItem* a_spell);

	void RemoveMagicEffectFromSpell(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::SpellItem* a_spell, RE::EffectSetting* a_mgef, float a_mag, UInt32 a_area, UInt32 a_dur, float a_cost);


	bool RegisterFuncs(VM* a_vm);
}
