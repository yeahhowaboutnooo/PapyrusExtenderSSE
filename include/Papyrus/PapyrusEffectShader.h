#pragma once


namespace papyrusEffectShader
{
	using VM = RE::BSScript::IVirtualMachine;
	using StackID = RE::VMStackID;
	using Severity = RE::BSScript::ErrorLogger::Severity;


	void ClearEffectShaderFlag(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESEffectShader* a_effectShader, std::uint32_t a_flag);

	float GetEffectShaderFullParticleCount(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESEffectShader* a_effectShader);

	float GetEffectShaderPersistentParticleCount(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESEffectShader* a_effectShader);

	std::uint32_t GetEffectShaderTotalCount(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESEffectShader* a_effectShader, bool a_active);

	bool IsEffectShaderFlagSet(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESEffectShader* a_effectShader, std::uint32_t a_flag);

	void SetEffectShaderFlag(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESEffectShader* a_effectShader, std::uint32_t a_flag);

	void SetEffectShaderFullParticleCount(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESEffectShader* a_effectShader, float a_particleCount);

	void SetEffectShaderPersistentParticleCount(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESEffectShader* a_effectShader, float a_particleCount);


	bool RegisterFuncs(VM* a_vm);

}