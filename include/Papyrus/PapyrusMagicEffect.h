#pragma once

#include "main.h"


namespace papyrusMagicEffect
{
	using VM = RE::BSScript::IVirtualMachine;
	using StackID = RE::VMStackID;
	using Severity = RE::BSScript::ErrorLogger::Severity;


	RE::TESForm* GetAssociatedForm(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::EffectSetting* a_mgef);

	UInt32 GetEffectArchetypeAsInt(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::EffectSetting* a_mgef);

	RE::BSFixedString GetEffectArchetypeAsString(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::EffectSetting* a_mgef);

	RE::BGSSoundDescriptorForm* GetMagicEffectSound(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::EffectSetting* a_mgef, UInt32 a_type);

	RE::BSFixedString GetPrimaryActorValue(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::EffectSetting* a_mgef);

	RE::BSFixedString GetSecondaryActorValue(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::EffectSetting* a_mgef);

	void SetMagicEffectSound(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::EffectSetting* a_mgef, RE::BGSSoundDescriptorForm* a_sound, UInt32 a_type);


	bool RegisterFuncs(VM* a_vm);
}
