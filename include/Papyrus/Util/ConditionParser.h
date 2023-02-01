#pragma once

namespace CONDITION
{
	using FUNC_ID = RE::FUNCTION_DATA::FunctionID;
	using OBJECT = RE::CONDITIONITEMOBJECT;
	using OP_CODE = RE::CONDITION_ITEM_DATA::OpCode;

	using PARAM_TYPE = RE::SCRIPT_PARAM_TYPE;
	using PARAMS = std::pair<std::optional<PARAM_TYPE>, std::optional<PARAM_TYPE>>;

	inline constexpr frozen::map<std::uint32_t, std::string_view, 402> funcIDs = {
		{ 0, "GetWantBlocking"sv },
		{ 1, "GetDistance"sv },
		{ 5, "GetLocked"sv },
		{ 6, "GetPos"sv },
		{ 8, "GetAngle"sv },
		{ 10, "GetStartingPos"sv },
		{ 11, "GetStartingAngle"sv },
		{ 12, "GetSecondsPassed"sv },
		{ 14, "GetActorValue"sv },
		{ 18, "GetCurrentTime"sv },
		{ 24, "GetScale"sv },
		{ 25, "IsMoving"sv },
		{ 26, "IsTurning"sv },
		{ 27, "GetLineOfSight"sv },
		{ 32, "GetInSameCell"sv },
		{ 35, "GetDisabled"sv },
		{ 36, "MenuMode"sv },
		{ 39, "GetDisease"sv },
		{ 41, "GetClothingValue"sv },
		{ 42, "SameFaction"sv },
		{ 43, "SameRace"sv },
		{ 44, "SameSex"sv },
		{ 45, "GetDetected"sv },
		{ 46, "GetDead"sv },
		{ 47, "GetItemCount"sv },
		{ 48, "GetGold"sv },
		{ 49, "GetSleeping"sv },
		{ 50, "GetTalkedToPC"sv },
		{ 53, "GetScriptVariable"sv },
		{ 56, "GetQuestRunning"sv },
		{ 58, "GetStage"sv },
		{ 59, "GetStageDone"sv },
		{ 60, "GetFactionRankDifference"sv },
		{ 61, "GetAlarmed"sv },
		{ 62, "IsRaining"sv },
		{ 63, "GetAttacked"sv },
		{ 64, "GetIsCreature"sv },
		{ 65, "GetLockLevel"sv },
		{ 66, "GetShouldAttack"sv },
		{ 67, "GetInCell"sv },
		{ 68, "GetIsClass"sv },
		{ 69, "GetIsRace"sv },
		{ 70, "GetIsSex"sv },
		{ 71, "GetInFaction"sv },
		{ 72, "GetIsID"sv },
		{ 73, "GetFactionRank"sv },
		{ 74, "GetGlobalValue"sv },
		{ 75, "IsSnowing"sv },
		{ 77, "GetRandomPercent"sv },
		{ 79, "GetQuestVariable"sv },
		{ 80, "GetLevel"sv },
		{ 81, "IsRotating"sv },
		{ 84, "GetDeadCount"sv },
		{ 91, "GetIsAlerted"sv },
		{ 98, "GetPlayerControlsDisabled"sv },
		{ 99, "GetHeadingAngle"sv },
		{ 101, "IsWeaponMagicOut"sv },
		{ 102, "IsTorchOut"sv },
		{ 103, "IsShieldOut"sv },
		{ 106, "IsFacingUp"sv },
		{ 107, "GetKnockedState"sv },
		{ 108, "GetWeaponAnimType"sv },
		{ 109, "IsWeaponSkillType"sv },
		{ 110, "GetCurrentAIPackage"sv },
		{ 111, "IsWaiting"sv },
		{ 112, "IsIdlePlaying"sv },
		{ 116, "IsIntimidatedbyPlayer"sv },
		{ 117, "IsPlayerInRegion"sv },
		{ 118, "GetActorAggroRadiusViolated"sv },
		{ 122, "GetCrime"sv },
		{ 123, "IsGreetingPlayer"sv },
		{ 125, "IsGuard"sv },
		{ 127, "HasBeenEaten"sv },
		{ 128, "GetStaminaPercentage"sv },
		{ 129, "GetPCIsClass"sv },
		{ 130, "GetPCIsRace"sv },
		{ 131, "GetPCIsSex"sv },
		{ 132, "GetPCInFaction"sv },
		{ 133, "SameFactionAsPC"sv },
		{ 134, "SameRaceAsPC"sv },
		{ 135, "SameSexAsPC"sv },
		{ 136, "GetIsReference"sv },
		{ 141, "IsTalking"sv },
		{ 142, "GetWalkSpeed"sv },
		{ 143, "GetCurrentAIProcedure"sv },
		{ 144, "GetTrespassWarningLevel"sv },
		{ 145, "IsTrespassing"sv },
		{ 146, "IsInMyOwnedCell"sv },
		{ 147, "GetWindSpeed"sv },
		{ 148, "GetCurrentWeatherPercent"sv },
		{ 149, "GetIsCurrentWeather"sv },
		{ 150, "IsContinuingPackagePCNear"sv },
		{ 152, "GetIsCrimeFaction"sv },
		{ 153, "CanHaveFlames"sv },
		{ 154, "HasFlames"sv },
		{ 157, "GetOpenState"sv },
		{ 159, "GetSitting"sv },
		{ 161, "GetIsCurrentPackage"sv },
		{ 162, "IsCurrentFurnitureRef"sv },
		{ 163, "IsCurrentFurnitureObj"sv },
		{ 170, "GetDayOfWeek"sv },
		{ 172, "GetTalkedToPCParam"sv },
		{ 175, "IsPCSleeping"sv },
		{ 176, "IsPCAMurderer"sv },
		{ 180, "HasSameEditorLocAsRef"sv },
		{ 181, "HasSameEditorLocAsRefAlias"sv },
		{ 182, "GetEquipped"sv },
		{ 185, "IsSwimming"sv },
		{ 190, "GetAmountSoldStolen"sv },
		{ 192, "GetIgnoreCrime"sv },
		{ 193, "GetPCExpelled"sv },
		{ 195, "GetPCFactionMurder"sv },
		{ 197, "GetPCEnemyofFaction"sv },
		{ 199, "GetPCFactionAttack"sv },
		{ 203, "GetDestroyed"sv },
		{ 214, "HasMagicEffect"sv },
		{ 215, "GetDefaultOpen"sv },
		{ 219, "GetAnimAction"sv },
		{ 223, "IsSpellTarget"sv },
		{ 224, "GetVATSMode"sv },
		{ 225, "GetPersuasionNumber"sv },
		{ 226, "GetVampireFeed"sv },
		{ 227, "GetCannibal"sv },
		{ 228, "GetIsClassDefault"sv },
		{ 229, "GetClassDefaultMatch"sv },
		{ 230, "GetInCellParam"sv },
		{ 235, "GetVatsTargetHeight"sv },
		{ 237, "GetIsGhost"sv },
		{ 242, "GetUnconscious"sv },
		{ 244, "GetRestrained"sv },
		{ 246, "GetIsUsedItem"sv },
		{ 247, "GetIsUsedItemType"sv },
		{ 248, "IsScenePlaying"sv },
		{ 249, "IsInDialogueWithPlayer"sv },
		{ 250, "GetLocationCleared"sv },
		{ 254, "GetIsPlayableRace"sv },
		{ 255, "GetOffersServicesNow"sv },
		{ 258, "HasAssociationType"sv },
		{ 259, "HasFamilyRelationship"sv },
		{ 261, "HasParentRelationship"sv },
		{ 262, "IsWarningAbout"sv },
		{ 263, "IsWeaponOut"sv },
		{ 264, "HasSpell"sv },
		{ 265, "IsTimePassing"sv },
		{ 266, "IsPleasant"sv },
		{ 267, "IsCloudy"sv },
		{ 274, "IsSmallBump"sv },
		{ 277, "GetBaseActorValue"sv },
		{ 278, "IsOwner"sv },
		{ 280, "IsCellOwner"sv },
		{ 282, "IsHorseStolen"sv },
		{ 285, "IsLeftUp"sv },
		{ 286, "IsSneaking"sv },
		{ 287, "IsRunning"sv },
		{ 288, "GetFriendHit"sv },
		{ 289, "IsInCombat"sv },
		{ 300, "IsInInterior"sv },
		{ 304, "IsWaterObject"sv },
		{ 305, "GetPlayerAction"sv },
		{ 306, "IsActorUsingATorch"sv },
		{ 309, "IsXBox"sv },
		{ 310, "GetInWorldspace"sv },
		{ 312, "GetPCMiscStat"sv },
		{ 313, "GetPairedAnimation"sv },
		{ 314, "IsActorAVictim"sv },
		{ 315, "GetTotalPersuasionNumber"sv },
		{ 318, "GetIdleDoneOnce"sv },
		{ 320, "GetNoRumors"sv },
		{ 323, "GetCombatState"sv },
		{ 325, "GetWithinPackageLocation"sv },
		{ 327, "IsRidingMount"sv },
		{ 329, "IsFleeing"sv },
		{ 332, "IsInDangerousWater"sv },
		{ 338, "GetIgnoreFriendlyHits"sv },
		{ 339, "IsPlayersLastRiddenMount"sv },
		{ 353, "IsActor"sv },
		{ 354, "IsEssential"sv },
		{ 358, "IsPlayerMovingIntoNewSpace"sv },
		{ 359, "GetInCurrentLoc"sv },
		{ 360, "GetInCurrentLocAlias"sv },
		{ 361, "GetTimeDead"sv },
		{ 362, "HasLinkedRef"sv },
		{ 365, "IsChild"sv },
		{ 366, "GetStolenItemValueNoCrime"sv },
		{ 367, "GetLastPlayerAction"sv },
		{ 368, "IsPlayerActionActive"sv },
		{ 370, "IsTalkingActivatorActor"sv },
		{ 372, "IsInList"sv },
		{ 373, "GetStolenItemValue"sv },
		{ 375, "GetCrimeGoldViolent"sv },
		{ 376, "GetCrimeGoldNonviolent"sv },
		{ 378, "HasShout"sv },
		{ 381, "GetHasNote"sv },
		{ 390, "GetHitLocation"sv },
		{ 391, "IsPC1stPerson"sv },
		{ 396, "GetCauseofDeath"sv },
		{ 397, "IsLimbGone"sv },
		{ 398, "IsWeaponInList"sv },
		{ 402, "IsBribedbyPlayer"sv },
		{ 403, "GetRelationshipRank"sv },
		{ 407, "GetVATSValue"sv },
		{ 408, "IsKiller"sv },
		{ 409, "IsKillerObject"sv },
		{ 410, "GetFactionCombatReaction"sv },
		{ 414, "Exists"sv },
		{ 415, "GetGroupMemberCount"sv },
		{ 416, "GetGroupTargetCount"sv },
		{ 426, "GetIsVoiceType"sv },
		{ 427, "GetPlantedExplosive"sv },
		{ 429, "IsScenePackageRunning"sv },
		{ 430, "GetHealthPercentage"sv },
		{ 432, "GetIsObjectType"sv },
		{ 434, "GetDialogueEmotion"sv },
		{ 435, "GetDialogueEmotionValue"sv },
		{ 437, "GetIsCreatureType"sv },
		{ 444, "GetInCurrentLocFormList"sv },
		{ 445, "GetInZone"sv },
		{ 446, "GetVelocity"sv },
		{ 447, "GetGraphVariableFloat"sv },
		{ 448, "HasPerk"sv },
		{ 449, "GetFactionRelation"sv },
		{ 450, "IsLastIdlePlayed"sv },
		{ 453, "GetPlayerTeammate"sv },
		{ 454, "GetPlayerTeammateCount"sv },
		{ 458, "GetActorCrimePlayerEnemy"sv },
		{ 459, "GetCrimeGold"sv },
		{ 463, "IsPlayerGrabbedRef"sv },
		{ 465, "GetKeywordItemCount"sv },
		{ 470, "GetDestructionStage"sv },
		{ 473, "GetIsAlignment"sv },
		{ 476, "IsProtected"sv },
		{ 477, "GetThreatRatio"sv },
		{ 479, "GetIsUsedItemEquipType"sv },
		{ 487, "IsCarryable"sv },
		{ 488, "GetConcussed"sv },
		{ 491, "GetMapMarkerVisible"sv },
		{ 493, "PlayerKnows"sv },
		{ 494, "GetPermanentActorValue"sv },
		{ 495, "GetKillingBlowLimb"sv },
		{ 497, "CanPayCrimeGold"sv },
		{ 499, "GetDaysInJail"sv },
		{ 500, "EPAlchemyGetMakingPoison"sv },
		{ 501, "EPAlchemyEffectHasKeyword"sv },
		{ 503, "GetAllowWorldInteractions"sv },
		{ 508, "GetLastHitCritical"sv },
		{ 513, "IsCombatTarget"sv },
		{ 515, "GetVATSRightAreaFree"sv },
		{ 516, "GetVATSLeftAreaFree"sv },
		{ 517, "GetVATSBackAreaFree"sv },
		{ 518, "GetVATSFrontAreaFree"sv },
		{ 519, "GetLockIsBroken"sv },
		{ 520, "IsPS3"sv },
		{ 521, "IsWin32"sv },
		{ 522, "GetVATSRightTargetVisible"sv },
		{ 523, "GetVATSLeftTargetVisible"sv },
		{ 524, "GetVATSBackTargetVisible"sv },
		{ 525, "GetVATSFrontTargetVisible"sv },
		{ 528, "IsInCriticalStage"sv },
		{ 530, "GetXPForNextLevel"sv },
		{ 533, "GetInfamy"sv },
		{ 534, "GetInfamyViolent"sv },
		{ 535, "GetInfamyNonViolent"sv },
		{ 543, "GetQuestCompleted"sv },
		{ 547, "IsGoreDisabled"sv },
		{ 550, "IsSceneActionComplete"sv },
		{ 552, "GetSpellUsageNum"sv },
		{ 554, "GetActorsInHigh"sv },
		{ 555, "HasLoaded3D"sv },
		{ 560, "HasKeyword"sv },
		{ 561, "HasRefType"sv },
		{ 562, "LocationHasKeyword"sv },
		{ 563, "LocationHasRefType"sv },
		{ 565, "GetIsEditorLocation"sv },
		{ 566, "GetIsAliasRef"sv },
		{ 567, "GetIsEditorLocAlias"sv },
		{ 568, "IsSprinting"sv },
		{ 569, "IsBlocking"sv },
		{ 570, "HasEquippedSpell"sv },
		{ 571, "GetCurrentCastingType"sv },
		{ 572, "GetCurrentDeliveryType"sv },
		{ 574, "GetAttackState"sv },
		{ 576, "GetEventData"sv },
		{ 577, "IsCloserToAThanB"sv },
		{ 579, "GetEquippedShout"sv },
		{ 580, "IsBleedingOut"sv },
		{ 584, "GetRelativeAngle"sv },
		{ 589, "GetMovementDirection"sv },
		{ 590, "IsInScene"sv },
		{ 591, "GetRefTypeDeadCount"sv },
		{ 592, "GetRefTypeAliveCount"sv },
		{ 594, "GetIsFlying"sv },
		{ 595, "IsCurrentSpell"sv },
		{ 596, "SpellHasKeyword"sv },
		{ 597, "GetEquippedItemType"sv },
		{ 598, "GetLocationAliasCleared"sv },
		{ 600, "GetLocAliasRefTypeDeadCount"sv },
		{ 601, "GetLocAliasRefTypeAliveCount"sv },
		{ 602, "IsWardState"sv },
		{ 603, "IsInSameCurrentLocAsRef"sv },
		{ 604, "IsInSameCurrentLocAsRefAlias"sv },
		{ 605, "LocAliasIsLocation"sv },
		{ 606, "GetKeywordDataForLocation"sv },
		{ 608, "GetKeywordDataForAlias"sv },
		{ 610, "LocAliasHasKeyword"sv },
		{ 611, "IsNullPackageData"sv },
		{ 612, "GetNumericPackageData"sv },
		{ 613, "IsFurnitureAnimType"sv },
		{ 614, "IsFurnitureEntryType"sv },
		{ 615, "GetHighestRelationshipRank"sv },
		{ 616, "GetLowestRelationshipRank"sv },
		{ 617, "HasAssociationTypeAny"sv },
		{ 618, "HasFamilyRelationshipAny"sv },
		{ 619, "GetPathingTargetOffset"sv },
		{ 620, "GetPathingTargetAngleOffset"sv },
		{ 621, "GetPathingTargetSpeed"sv },
		{ 622, "GetPathingTargetSpeedAngle"sv },
		{ 623, "GetMovementSpeed"sv },
		{ 624, "GetInContainer"sv },
		{ 625, "IsLocationLoaded"sv },
		{ 626, "IsLocAliasLoaded"sv },
		{ 627, "IsDualCasting"sv },
		{ 629, "GetVMQuestVariable"sv },
		{ 630, "GetVMScriptVariable"sv },
		{ 631, "IsEnteringInteractionQuick"sv },
		{ 632, "IsCasting"sv },
		{ 633, "GetFlyingState"sv },
		{ 635, "IsInFavorState"sv },
		{ 636, "HasTwoHandedWeaponEquipped"sv },
		{ 637, "IsExitingInstant"sv },
		{ 638, "IsInFriendStateWithPlayer"sv },
		{ 639, "GetWithinDistance"sv },
		{ 640, "GetActorValuePercent"sv },
		{ 641, "IsUnique"sv },
		{ 642, "GetLastBumpDirection"sv },
		{ 644, "IsInFurnitureState"sv },
		{ 645, "GetIsInjured"sv },
		{ 646, "GetIsCrashLandRequest"sv },
		{ 647, "GetIsHastyLandRequest"sv },
		{ 650, "IsLinkedTo"sv },
		{ 651, "GetKeywordDataForCurrentLocation"sv },
		{ 652, "GetInSharedCrimeFaction"sv },
		{ 654, "GetBribeSuccess"sv },
		{ 655, "GetIntimidateSuccess"sv },
		{ 656, "GetArrestedState"sv },
		{ 657, "GetArrestingActor"sv },
		{ 659, "EPTemperingItemIsEnchanted"sv },
		{ 660, "EPTemperingItemHasKeyword"sv },
		{ 664, "GetReplacedItemType"sv },
		{ 672, "IsAttacking"sv },
		{ 673, "IsPowerAttacking"sv },
		{ 674, "IsLastHostileActor"sv },
		{ 675, "GetGraphVariableInt"sv },
		{ 676, "GetCurrentShoutVariation"sv },
		{ 678, "ShouldAttackKill"sv },
		{ 680, "GetActivatorHeight"sv },
		{ 681, "EPMagic_IsAdvanceSkill"sv },
		{ 682, "WornHasKeyword"sv },
		{ 683, "GetPathingCurrentSpeed"sv },
		{ 684, "GetPathingCurrentSpeedAngle"sv },
		{ 691, "EPModSkillUsage_AdvanceObjectHasKeyword"sv },
		{ 692, "EPModSkillUsage_IsAdvanceAction"sv },
		{ 693, "EPMagic_SpellHasKeyword"sv },
		{ 694, "GetNoBleedoutRecovery"sv },
		{ 696, "EPMagic_SpellHasSkill"sv },
		{ 697, "IsAttackType"sv },
		{ 698, "IsAllowedToFly"sv },
		{ 699, "HasMagicEffectKeyword"sv },
		{ 700, "IsCommandedActor"sv },
		{ 701, "IsStaggered"sv },
		{ 702, "IsRecoiling"sv },
		{ 703, "IsExitingInteractionQuick"sv },
		{ 704, "IsPathing"sv },
		{ 705, "GetShouldHelp"sv },
		{ 706, "HasBoundWeaponEquipped"sv },
		{ 707, "GetCombatTargetHasKeyword"sv },
		{ 709, "GetCombatGroupMemberCount"sv },
		{ 710, "IsIgnoringCombat"sv },
		{ 711, "GetLightLevel"sv },
		{ 713, "SpellHasCastingPerk"sv },
		{ 714, "IsBeingRidden"sv },
		{ 715, "IsUndead"sv },
		{ 716, "GetRealHoursPassed"sv },
		{ 718, "IsUnlockedDoor"sv },
		{ 719, "IsHostileToActor"sv },
		{ 720, "GetTargetHeight"sv },
		{ 721, "IsPoison"sv },
		{ 722, "WornApparelHasKeywordCount"sv },
		{ 723, "GetItemHealthPercent"sv },
		{ 724, "EffectWasDualCast"sv },
		{ 725, "GetKnockedStateEnum"sv },
		{ 726, "DoesNotExist"sv },
		{ 730, "IsOnFlyingMount"sv },
		{ 731, "CanFlyHere"sv },
		{ 732, "IsFlyingMountPatrolQueud"sv },
		{ 733, "IsFlyingMountFastTravelling"sv },
		{ 734, "IsOverEncumbered"sv },
		{ 735, "GetActorWarmth"sv },
		{ 1024, "GetSKSEVersion"sv },
		{ 1025, "GetSKSEVersionMinor"sv },
		{ 1026, "GetSKSEVersionBeta"sv },
		{ 1027, "GetSKSERelease"sv },
		{ 1028, "ClearInvalidRegistrations"sv },
	};
	inline constexpr frozen::map<std::string_view, std::uint32_t, 402> funcIDs_reverse = {
		{ "GetWantBlocking"sv, 0 },
		{ "GetDistance"sv, 1 },
		{ "GetLocked"sv, 5 },
		{ "GetPos"sv, 6 },
		{ "GetAngle"sv, 8 },
		{ "GetStartingPos"sv, 10 },
		{ "GetStartingAngle"sv, 11 },
		{ "GetSecondsPassed"sv, 12 },
		{ "GetActorValue"sv, 14 },
		{ "GetCurrentTime"sv, 18 },
		{ "GetScale"sv, 24 },
		{ "IsMoving"sv, 25 },
		{ "IsTurning"sv, 26 },
		{ "GetLineOfSight"sv, 27 },
		{ "GetInSameCell"sv, 32 },
		{ "GetDisabled"sv, 35 },
		{ "MenuMode"sv, 36 },
		{ "GetDisease"sv, 39 },
		{ "GetClothingValue"sv, 41 },
		{ "SameFaction"sv, 42 },
		{ "SameRace"sv, 43 },
		{ "SameSex"sv, 44 },
		{ "GetDetected"sv, 45 },
		{ "GetDead"sv, 46 },
		{ "GetItemCount"sv, 47 },
		{ "GetGold"sv, 48 },
		{ "GetSleeping"sv, 49 },
		{ "GetTalkedToPC"sv, 50 },
		{ "GetScriptVariable"sv, 53 },
		{ "GetQuestRunning"sv, 56 },
		{ "GetStage"sv, 58 },
		{ "GetStageDone"sv, 59 },
		{ "GetFactionRankDifference"sv, 60 },
		{ "GetAlarmed"sv, 61 },
		{ "IsRaining"sv, 62 },
		{ "GetAttacked"sv, 63 },
		{ "GetIsCreature"sv, 64 },
		{ "GetLockLevel"sv, 65 },
		{ "GetShouldAttack"sv, 66 },
		{ "GetInCell"sv, 67 },
		{ "GetIsClass"sv, 68 },
		{ "GetIsRace"sv, 69 },
		{ "GetIsSex"sv, 70 },
		{ "GetInFaction"sv, 71 },
		{ "GetIsID"sv, 72 },
		{ "GetFactionRank"sv, 73 },
		{ "GetGlobalValue"sv, 74 },
		{ "IsSnowing"sv, 75 },
		{ "GetRandomPercent"sv, 77 },
		{ "GetQuestVariable"sv, 79 },
		{ "GetLevel"sv, 80 },
		{ "IsRotating"sv, 81 },
		{ "GetDeadCount"sv, 84 },
		{ "GetIsAlerted"sv, 91 },
		{ "GetPlayerControlsDisabled"sv, 98 },
		{ "GetHeadingAngle"sv, 99 },
		{ "IsWeaponMagicOut"sv, 101 },
		{ "IsTorchOut"sv, 102 },
		{ "IsShieldOut"sv, 103 },
		{ "IsFacingUp"sv, 106 },
		{ "GetKnockedState"sv, 107 },
		{ "GetWeaponAnimType"sv, 108 },
		{ "IsWeaponSkillType"sv, 109 },
		{ "GetCurrentAIPackage"sv, 110 },
		{ "IsWaiting"sv, 111 },
		{ "IsIdlePlaying"sv, 112 },
		{ "IsIntimidatedbyPlayer"sv, 116 },
		{ "IsPlayerInRegion"sv, 117 },
		{ "GetActorAggroRadiusViolated"sv, 118 },
		{ "GetCrime"sv, 122 },
		{ "IsGreetingPlayer"sv, 123 },
		{ "IsGuard"sv, 125 },
		{ "HasBeenEaten"sv, 127 },
		{ "GetStaminaPercentage"sv, 128 },
		{ "GetPCIsClass"sv, 129 },
		{ "GetPCIsRace"sv, 130 },
		{ "GetPCIsSex"sv, 131 },
		{ "GetPCInFaction"sv, 132 },
		{ "SameFactionAsPC"sv, 133 },
		{ "SameRaceAsPC"sv, 134 },
		{ "SameSexAsPC"sv, 135 },
		{ "GetIsReference"sv, 136 },
		{ "IsTalking"sv, 141 },
		{ "GetWalkSpeed"sv, 142 },
		{ "GetCurrentAIProcedure"sv, 143 },
		{ "GetTrespassWarningLevel"sv, 144 },
		{ "IsTrespassing"sv, 145 },
		{ "IsInMyOwnedCell"sv, 146 },
		{ "GetWindSpeed"sv, 147 },
		{ "GetCurrentWeatherPercent"sv, 148 },
		{ "GetIsCurrentWeather"sv, 149 },
		{ "IsContinuingPackagePCNear"sv, 150 },
		{ "GetIsCrimeFaction"sv, 152 },
		{ "CanHaveFlames"sv, 153 },
		{ "HasFlames"sv, 154 },
		{ "GetOpenState"sv, 157 },
		{ "GetSitting"sv, 159 },
		{ "GetIsCurrentPackage"sv, 161 },
		{ "IsCurrentFurnitureRef"sv, 162 },
		{ "IsCurrentFurnitureObj"sv, 163 },
		{ "GetDayOfWeek"sv, 170 },
		{ "GetTalkedToPCParam"sv, 172 },
		{ "IsPCSleeping"sv, 175 },
		{ "IsPCAMurderer"sv, 176 },
		{ "HasSameEditorLocAsRef"sv, 180 },
		{ "HasSameEditorLocAsRefAlias"sv, 181 },
		{ "GetEquipped"sv, 182 },
		{ "IsSwimming"sv, 185 },
		{ "GetAmountSoldStolen"sv, 190 },
		{ "GetIgnoreCrime"sv, 192 },
		{ "GetPCExpelled"sv, 193 },
		{ "GetPCFactionMurder"sv, 195 },
		{ "GetPCEnemyofFaction"sv, 197 },
		{ "GetPCFactionAttack"sv, 199 },
		{ "GetDestroyed"sv, 203 },
		{ "HasMagicEffect"sv, 214 },
		{ "GetDefaultOpen"sv, 215 },
		{ "GetAnimAction"sv, 219 },
		{ "IsSpellTarget"sv, 223 },
		{ "GetVATSMode"sv, 224 },
		{ "GetPersuasionNumber"sv, 225 },
		{ "GetVampireFeed"sv, 226 },
		{ "GetCannibal"sv, 227 },
		{ "GetIsClassDefault"sv, 228 },
		{ "GetClassDefaultMatch"sv, 229 },
		{ "GetInCellParam"sv, 230 },
		{ "GetVatsTargetHeight"sv, 235 },
		{ "GetIsGhost"sv, 237 },
		{ "GetUnconscious"sv, 242 },
		{ "GetRestrained"sv, 244 },
		{ "GetIsUsedItem"sv, 246 },
		{ "GetIsUsedItemType"sv, 247 },
		{ "IsScenePlaying"sv, 248 },
		{ "IsInDialogueWithPlayer"sv, 249 },
		{ "GetLocationCleared"sv, 250 },
		{ "GetIsPlayableRace"sv, 254 },
		{ "GetOffersServicesNow"sv, 255 },
		{ "HasAssociationType"sv, 258 },
		{ "HasFamilyRelationship"sv, 259 },
		{ "HasParentRelationship"sv, 261 },
		{ "IsWarningAbout"sv, 262 },
		{ "IsWeaponOut"sv, 263 },
		{ "HasSpell"sv, 264 },
		{ "IsTimePassing"sv, 265 },
		{ "IsPleasant"sv, 266 },
		{ "IsCloudy"sv, 267 },
		{ "IsSmallBump"sv, 274 },
		{ "GetBaseActorValue"sv, 277 },
		{ "IsOwner"sv, 278 },
		{ "IsCellOwner"sv, 280 },
		{ "IsHorseStolen"sv, 282 },
		{ "IsLeftUp"sv, 285 },
		{ "IsSneaking"sv, 286 },
		{ "IsRunning"sv, 287 },
		{ "GetFriendHit"sv, 288 },
		{ "IsInCombat"sv, 289 },
		{ "IsInInterior"sv, 300 },
		{ "IsWaterObject"sv, 304 },
		{ "GetPlayerAction"sv, 305 },
		{ "IsActorUsingATorch"sv, 306 },
		{ "IsXBox"sv, 309 },
		{ "GetInWorldspace"sv, 310 },
		{ "GetPCMiscStat"sv, 312 },
		{ "GetPairedAnimation"sv, 313 },
		{ "IsActorAVictim"sv, 314 },
		{ "GetTotalPersuasionNumber"sv, 315 },
		{ "GetIdleDoneOnce"sv, 318 },
		{ "GetNoRumors"sv, 320 },
		{ "GetCombatState"sv, 323 },
		{ "GetWithinPackageLocation"sv, 325 },
		{ "IsRidingMount"sv, 327 },
		{ "IsFleeing"sv, 329 },
		{ "IsInDangerousWater"sv, 332 },
		{ "GetIgnoreFriendlyHits"sv, 338 },
		{ "IsPlayersLastRiddenMount"sv, 339 },
		{ "IsActor"sv, 353 },
		{ "IsEssential"sv, 354 },
		{ "IsPlayerMovingIntoNewSpace"sv, 358 },
		{ "GetInCurrentLoc"sv, 359 },
		{ "GetInCurrentLocAlias"sv, 360 },
		{ "GetTimeDead"sv, 361 },
		{ "HasLinkedRef"sv, 362 },
		{ "IsChild"sv, 365 },
		{ "GetStolenItemValueNoCrime"sv, 366 },
		{ "GetLastPlayerAction"sv, 367 },
		{ "IsPlayerActionActive"sv, 368 },
		{ "IsTalkingActivatorActor"sv, 370 },
		{ "IsInList"sv, 372 },
		{ "GetStolenItemValue"sv, 373 },
		{ "GetCrimeGoldViolent"sv, 375 },
		{ "GetCrimeGoldNonviolent"sv, 376 },
		{ "HasShout"sv, 378 },
		{ "GetHasNote"sv, 381 },
		{ "GetHitLocation"sv, 390 },
		{ "IsPC1stPerson"sv, 391 },
		{ "GetCauseofDeath"sv, 396 },
		{ "IsLimbGone"sv, 397 },
		{ "IsWeaponInList"sv, 398 },
		{ "IsBribedbyPlayer"sv, 402 },
		{ "GetRelationshipRank"sv, 403 },
		{ "GetVATSValue"sv, 407 },
		{ "IsKiller"sv, 408 },
		{ "IsKillerObject"sv, 409 },
		{ "GetFactionCombatReaction"sv, 410 },
		{ "Exists"sv, 414 },
		{ "GetGroupMemberCount"sv, 415 },
		{ "GetGroupTargetCount"sv, 416 },
		{ "GetIsVoiceType"sv, 426 },
		{ "GetPlantedExplosive"sv, 427 },
		{ "IsScenePackageRunning"sv, 429 },
		{ "GetHealthPercentage"sv, 430 },
		{ "GetIsObjectType"sv, 432 },
		{ "GetDialogueEmotion"sv, 434 },
		{ "GetDialogueEmotionValue"sv, 435 },
		{ "GetIsCreatureType"sv, 437 },
		{ "GetInCurrentLocFormList"sv, 444 },
		{ "GetInZone"sv, 445 },
		{ "GetVelocity"sv, 446 },
		{ "GetGraphVariableFloat"sv, 447 },
		{ "HasPerk"sv, 448 },
		{ "GetFactionRelation"sv, 449 },
		{ "IsLastIdlePlayed"sv, 450 },
		{ "GetPlayerTeammate"sv, 453 },
		{ "GetPlayerTeammateCount"sv, 454 },
		{ "GetActorCrimePlayerEnemy"sv, 458 },
		{ "GetCrimeGold"sv, 459 },
		{ "IsPlayerGrabbedRef"sv, 463 },
		{ "GetKeywordItemCount"sv, 465 },
		{ "GetDestructionStage"sv, 470 },
		{ "GetIsAlignment"sv, 473 },
		{ "IsProtected"sv, 476 },
		{ "GetThreatRatio"sv, 477 },
		{ "GetIsUsedItemEquipType"sv, 479 },
		{ "IsCarryable"sv, 487 },
		{ "GetConcussed"sv, 488 },
		{ "GetMapMarkerVisible"sv, 491 },
		{ "PlayerKnows"sv, 493 },
		{ "GetPermanentActorValue"sv, 494 },
		{ "GetKillingBlowLimb"sv, 495 },
		{ "CanPayCrimeGold"sv, 497 },
		{ "GetDaysInJail"sv, 499 },
		{ "EPAlchemyGetMakingPoison"sv, 500 },
		{ "EPAlchemyEffectHasKeyword"sv, 501 },
		{ "GetAllowWorldInteractions"sv, 503 },
		{ "GetLastHitCritical"sv, 508 },
		{ "IsCombatTarget"sv, 513 },
		{ "GetVATSRightAreaFree"sv, 515 },
		{ "GetVATSLeftAreaFree"sv, 516 },
		{ "GetVATSBackAreaFree"sv, 517 },
		{ "GetVATSFrontAreaFree"sv, 518 },
		{ "GetLockIsBroken"sv, 519 },
		{ "IsPS3"sv, 520 },
		{ "IsWin32"sv, 521 },
		{ "GetVATSRightTargetVisible"sv, 522 },
		{ "GetVATSLeftTargetVisible"sv, 523 },
		{ "GetVATSBackTargetVisible"sv, 524 },
		{ "GetVATSFrontTargetVisible"sv, 525 },
		{ "IsInCriticalStage"sv, 528 },
		{ "GetXPForNextLevel"sv, 530 },
		{ "GetInfamy"sv, 533 },
		{ "GetInfamyViolent"sv, 534 },
		{ "GetInfamyNonViolent"sv, 535 },
		{ "GetQuestCompleted"sv, 543 },
		{ "IsGoreDisabled"sv, 547 },
		{ "IsSceneActionComplete"sv, 550 },
		{ "GetSpellUsageNum"sv, 552 },
		{ "GetActorsInHigh"sv, 554 },
		{ "HasLoaded3D"sv, 555 },
		{ "HasKeyword"sv, 560 },
		{ "HasRefType"sv, 561 },
		{ "LocationHasKeyword"sv, 562 },
		{ "LocationHasRefType"sv, 563 },
		{ "GetIsEditorLocation"sv, 565 },
		{ "GetIsAliasRef"sv, 566 },
		{ "GetIsEditorLocAlias"sv, 567 },
		{ "IsSprinting"sv, 568 },
		{ "IsBlocking"sv, 569 },
		{ "HasEquippedSpell"sv, 570 },
		{ "GetCurrentCastingType"sv, 571 },
		{ "GetCurrentDeliveryType"sv, 572 },
		{ "GetAttackState"sv, 574 },
		{ "GetEventData"sv, 576 },
		{ "IsCloserToAThanB"sv, 577 },
		{ "GetEquippedShout"sv, 579 },
		{ "IsBleedingOut"sv, 580 },
		{ "GetRelativeAngle"sv, 584 },
		{ "GetMovementDirection"sv, 589 },
		{ "IsInScene"sv, 590 },
		{ "GetRefTypeDeadCount"sv, 591 },
		{ "GetRefTypeAliveCount"sv, 592 },
		{ "GetIsFlying"sv, 594 },
		{ "IsCurrentSpell"sv, 595 },
		{ "SpellHasKeyword"sv, 596 },
		{ "GetEquippedItemType"sv, 597 },
		{ "GetLocationAliasCleared"sv, 598 },
		{ "GetLocAliasRefTypeDeadCount"sv, 600 },
		{ "GetLocAliasRefTypeAliveCount"sv, 601 },
		{ "IsWardState"sv, 602 },
		{ "IsInSameCurrentLocAsRef"sv, 603 },
		{ "IsInSameCurrentLocAsRefAlias"sv, 604 },
		{ "LocAliasIsLocation"sv, 605 },
		{ "GetKeywordDataForLocation"sv, 606 },
		{ "GetKeywordDataForAlias"sv, 608 },
		{ "LocAliasHasKeyword"sv, 610 },
		{ "IsNullPackageData"sv, 611 },
		{ "GetNumericPackageData"sv, 612 },
		{ "IsFurnitureAnimType"sv, 613 },
		{ "IsFurnitureEntryType"sv, 614 },
		{ "GetHighestRelationshipRank"sv, 615 },
		{ "GetLowestRelationshipRank"sv, 616 },
		{ "HasAssociationTypeAny"sv, 617 },
		{ "HasFamilyRelationshipAny"sv, 618 },
		{ "GetPathingTargetOffset"sv, 619 },
		{ "GetPathingTargetAngleOffset"sv, 620 },
		{ "GetPathingTargetSpeed"sv, 621 },
		{ "GetPathingTargetSpeedAngle"sv, 622 },
		{ "GetMovementSpeed"sv, 623 },
		{ "GetInContainer"sv, 624 },
		{ "IsLocationLoaded"sv, 625 },
		{ "IsLocAliasLoaded"sv, 626 },
		{ "IsDualCasting"sv, 627 },
		{ "GetVMQuestVariable"sv, 629 },
		{ "GetVMScriptVariable"sv, 630 },
		{ "IsEnteringInteractionQuick"sv, 631 },
		{ "IsCasting"sv, 632 },
		{ "GetFlyingState"sv, 633 },
		{ "IsInFavorState"sv, 635 },
		{ "HasTwoHandedWeaponEquipped"sv, 636 },
		{ "IsExitingInstant"sv, 637 },
		{ "IsInFriendStateWithPlayer"sv, 638 },
		{ "GetWithinDistance"sv, 639 },
		{ "GetActorValuePercent"sv, 640 },
		{ "IsUnique"sv, 641 },
		{ "GetLastBumpDirection"sv, 642 },
		{ "IsInFurnitureState"sv, 644 },
		{ "GetIsInjured"sv, 645 },
		{ "GetIsCrashLandRequest"sv, 646 },
		{ "GetIsHastyLandRequest"sv, 647 },
		{ "IsLinkedTo"sv, 650 },
		{ "GetKeywordDataForCurrentLocation"sv, 651 },
		{ "GetInSharedCrimeFaction"sv, 652 },
		{ "GetBribeSuccess"sv, 654 },
		{ "GetIntimidateSuccess"sv, 655 },
		{ "GetArrestedState"sv, 656 },
		{ "GetArrestingActor"sv, 657 },
		{ "EPTemperingItemIsEnchanted"sv, 659 },
		{ "EPTemperingItemHasKeyword"sv, 660 },
		{ "GetReplacedItemType"sv, 664 },
		{ "IsAttacking"sv, 672 },
		{ "IsPowerAttacking"sv, 673 },
		{ "IsLastHostileActor"sv, 674 },
		{ "GetGraphVariableInt"sv, 675 },
		{ "GetCurrentShoutVariation"sv, 676 },
		{ "ShouldAttackKill"sv, 678 },
		{ "GetActivatorHeight"sv, 680 },
		{ "EPMagic_IsAdvanceSkill"sv, 681 },
		{ "WornHasKeyword"sv, 682 },
		{ "GetPathingCurrentSpeed"sv, 683 },
		{ "GetPathingCurrentSpeedAngle"sv, 684 },
		{ "EPModSkillUsage_AdvanceObjectHasKeyword"sv, 691 },
		{ "EPModSkillUsage_IsAdvanceAction"sv, 692 },
		{ "EPMagic_SpellHasKeyword"sv, 693 },
		{ "GetNoBleedoutRecovery"sv, 694 },
		{ "EPMagic_SpellHasSkill"sv, 696 },
		{ "IsAttackType"sv, 697 },
		{ "IsAllowedToFly"sv, 698 },
		{ "HasMagicEffectKeyword"sv, 699 },
		{ "IsCommandedActor"sv, 700 },
		{ "IsStaggered"sv, 701 },
		{ "IsRecoiling"sv, 702 },
		{ "IsExitingInteractionQuick"sv, 703 },
		{ "IsPathing"sv, 704 },
		{ "GetShouldHelp"sv, 705 },
		{ "HasBoundWeaponEquipped"sv, 706 },
		{ "GetCombatTargetHasKeyword"sv, 707 },
		{ "GetCombatGroupMemberCount"sv, 709 },
		{ "IsIgnoringCombat"sv, 710 },
		{ "GetLightLevel"sv, 711 },
		{ "SpellHasCastingPerk"sv, 713 },
		{ "IsBeingRidden"sv, 714 },
		{ "IsUndead"sv, 715 },
		{ "GetRealHoursPassed"sv, 716 },
		{ "IsUnlockedDoor"sv, 718 },
		{ "IsHostileToActor"sv, 719 },
		{ "GetTargetHeight"sv, 720 },
		{ "IsPoison"sv, 721 },
		{ "WornApparelHasKeywordCount"sv, 722 },
		{ "GetItemHealthPercent"sv, 723 },
		{ "EffectWasDualCast"sv, 724 },
		{ "GetKnockedStateEnum"sv, 725 },
		{ "DoesNotExist"sv, 726 },
		{ "IsOnFlyingMount"sv, 730 },
		{ "CanFlyHere"sv, 731 },
		{ "IsFlyingMountPatrolQueud"sv, 732 },
		{ "IsFlyingMountFastTravelling"sv, 733 },
		{ "IsOverEncumbered"sv, 734 },
		{ "GetActorWarmth"sv, 735 },
		{ "GetSKSEVersion"sv, 1024 },
		{ "GetSKSEVersionMinor"sv, 1025 },
		{ "GetSKSEVersionBeta"sv, 1026 },
		{ "GetSKSERelease"sv, 1027 },
		{ "ClearInvalidRegistrations"sv, 1028 }
	};

	inline constexpr frozen::map<std::uint32_t, std::string_view, 8> conditionObjs = {
		{ 0, "Subject"sv },
		{ 1, "Target"sv },
		{ 2, "Reference"sv },
		{ 3, "Combat Target"sv },
		{ 4, "Linked Reference"sv },
		{ 5, "Quest Alias"sv },
		{ 6, "Package Data"sv },
		{ 7, "Event Data"sv },
		{ 8, "Player"sv }
	};
	inline constexpr frozen::map<std::string_view, std::uint32_t, 8> conditionObjs_reverse = {
		{ "Subject"sv, 0 },
		{ "Target"sv, 1 },
		{ "Reference"sv, 2 },
		{ "Combat Target"sv, 3 },
		{ "Linked Reference"sv, 4 },
		{ "Quest Alias"sv, 5 },
		{ "Package Data"sv, 6 },
		{ "Event Data"sv, 7 },
		{ "Player"sv, 8 }
	};

	inline constexpr frozen::map<std::uint32_t, std::string_view, 6> opCodes = {
		{ 0, "=="sv },
		{ 1, "!="sv },
		{ 2, ">"sv },
		{ 3, ">="sv },
		{ 4, "<"sv },
		{ 5, "<="sv }
	};
	inline constexpr frozen::map<std::string_view, std::uint32_t, 6> opCodes_reverse = {
		{ "=="sv, 0 },
		{ "!="sv, 1 },
		{ ">"sv, 2 },
		{ ">="sv, 3 },
		{ "<"sv, 4 },
		{ "<="sv, 5 }
	};

	struct util
	{
		template <class T, class M, class K>
		static std::optional<T> get_value(const M& a_map, const K& a_key)
		{
			if (auto it = a_map.find(a_key); it != a_map.end()) {
				return static_cast<T>(it->second);
			}
			return std::nullopt;
		}

		template <class T>
		static std::optional<T> get_value(const std::string& a_str)
		{
			if (string::is_only_digit(a_str)) {
				return string::to_num<T>(a_str);
			} else {
				if (std::is_same_v<OBJECT, T>) {
					return get_value<T>(conditionObjs_reverse, a_str);
				} else if (std::is_same_v<FUNC_ID, T>) {
					return get_value<T>(funcIDs_reverse, a_str);
				} else {
					return get_value<T>(opCodes_reverse, a_str);
				}
			}
		}
	};

	struct ConditionData
	{
		enum TYPE : std::uint32_t
		{
			kConditionItemObject = 0,
			kFunctionID,
			kParam1,
			kParam2,
			kOPCode,
			kFloat,
			kANDOR
		};

		ConditionData() = default;
		ConditionData(const RE::TESConditionItem* a_condition);

		OBJECT conditionItem;
		FUNC_ID functionID;
		void* param1;
		void* param2;
		OP_CODE opCode;
		float value;
		bool andOr;
	};
	using ConditionDataVec = std::vector<ConditionData>;

	RE::TESCondition* GetCondition(RE::TESForm& a_form, std::uint32_t a_index);

	ConditionDataVec ParseConditions(const std::vector<std::string>& a_conditionList);
	std::vector<std::string> BuildConditions(const RE::TESCondition* a_conditions);
}
