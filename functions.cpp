[CLIENT.dll] {
	AccumulatePose() = "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ?"; 
	AddDependencies() = "55 8B EC 81 EC BC 00 00 00 53 56 57"; 
	AddEconItem() = "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 14 53 56 57 8B F9 8B 08"; 
	BuildTransformations() = "55 8B EC 83 E4 F0 81 EC  E8 01 00 00 56 57"; 
	CAM_Think() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 56 8B F1 8B 0D ? ? ? ? 57 85 C9"; 
	CAchievementMgr::SaveGlobalState() = "55 8B EC 51 53 56 8B F1 8B 0D ? ? ? ? 8B 81"; 
	CBaseAchievement::EnsureComponentBitSetAndEvaluate() = "55 8B EC 51 56 8B F1 57 8B 46";
	CBaseAchievement::FireGameEvent() = "55 8B EC 56 8B F1 8B 06 8B 40 28";
	CBaseAchievement::IncrementCount() = "8B 46 0C 8D 4E 0C 8B 40 14 FF D0 84 C0 0F 85 ? ? ? ? 8B" - 4;
	CBaseAchievement::OnComponentEvent() = "55 8B EC 51 8B C1 53 56 33 F6 89 45 FC 8B 58 50";
	CC_CL_Find_Ent() = "55 8B EC 51 57 8B 7D 08 8B 07";
	CClientShadowMgr::InitDepthTextureShadow() = "55 8B EC 83 EC 54 53 8B D9 8B 0D ? ? ? ? 89"; 
	CEffectsList::DrawEffects() = "55 8B EC 83 EC 08 A1 ? ? ? ? 89 4D FC 8B"; 
	CHLClient::CreateMove() = "55 8B EC 83 EC 08 FF 15 ? ? ? ? 84";
	CHLClient::FrameStageNotify() = "55 8B EC 8B 0D A4 01 2C 15 8B 01 8B 80 74";
	CMatchmakingStatus::OnEvent() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 53 8B 5D 08 56 57 8B F9 85";
	CMergedMDL_Constructor() = "53 8B D9 56 57 8D 4B 04 C7 03 ? ? ? ? E8 ? ? ? ? 6A";
	CModelRenderSystem::DrawBrushModels() = "55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B 7D 0C 8B D9"; 
	CNetChan::SendDatagram() = "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 57 8B F9 89 7C 24 18";
	CPanel2D::SetDialogVariable() = "55 8B EC 83 E4 C0 81 EC ? ? ? ? 53 56 8B D9 57 89 5C 24";
	C_BaseAnimating::DrawModel() = "55 8B EC 83 EC 14 53 56 8B F1 8B 0D ? ? ? ? 57 89"; 
	C_BaseAnimating::FrameAdvance() = "55 8B EC 83 E4 C0 83 EC 38 56 8B"; 
	C_BaseAnimating::StandardBlendingRules() = "55 8B EC 83 E4 F0 B8 F8 10"; 
	C_BaseCombatWeapon::DrawModel() = "55 8B EC 51 56 8B F1 8B 0D ? ? ? ? 57 8B B9"; 
	C_BaseEntity::DrawBrushModel() = "68 ? ? ? ? 6A 00 68 ? ? ? ? FF 15 ? ? ? ? 8B 45" - 0x1C; 
	C_BaseEntity::EmitSound() = "55 8B EC 83 EC 4C 53 8B D9 8B "; 
	C_CSPlayer::AttachmentHelper() = "55 8B EC 83 EC 48 53 8B 5D 08 89 4D F4"; 
	C_CSPlayer::GetEyePosition() = "55 8B EC 56 8B 75 08 57 8B F9 56 8B 07 FF 90"; 
	C_CSPlayer::InvalidatePhysicsRecursive() = "55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C3"; 
	C_CSPlayer::LookupSequence() = "85 C0 74 07 8B CE E8 ? ? ? ? 8B B6 ? ? ? ? 85 F6 74" - 0x18; 
	C_CSPlayer::UpdateClientsideAnimation() = "55 8B EC 51 56 8B F1 80 BE ? ? ? ? ? 74 36"; 
	C_ClientModeShared::CreateMove() = "55 8B EC 8B 0D ? ? ? ? 85 C9 75 06";
	C_ClientModeShared::GetViewmodelFOV() = "55 8B EC 8B 0D ? ? ? ? 83 EC 08 57";
	C_ClientModeShared::OverrideView() = "55 8B EC 83 E4 F8 83 EC 58 56 57 8B 3D";
	C_GameInstructor::Update() = "55 8B EC 83 EC 10 53 8B D9 8B 0D ? ? ? ? 8B";  
	C_PlayerAnimState::ModifyEyePosition() = "55 8B EC 83 E4 F8 83 EC 5C 53 8B D9 56 57 83"; 
	C_PlayerAnimState::Update() = "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3"; 
	CacheSequences() = "55 8B EC 83 E4 F8 83 EC 34 53 56 8B F1 57 8B";
	CalcAbsolutePosition() = "55 8B EC 83 E4 F0 83 EC 68 80 3D"; 
	CalcAbsoluteVelocity() = "55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B F9 F7"; 
	CalcPlayerView() = "84 C0 75 08 57 8B CE E8 ? ? ? ? 8B 06"; 
	CalculateView() = "55 8B EC 83 EC 14 53 56 57 FF 75 18"; 
	ClearDeathNotices() = "55 8B EC 83 EC 0C 53 56 8B 71 58";
	ClearNotices() = "55 8B EC 83 EC 0C 53 56 8B 71 58"; 
	ClipRayToHitbox() = "55 8B EC 83 E4 F8 F3 0F 10 42";   
	CreateAnimationState() = "55 8B EC 56 8B F1 B9 ? ? ? ? C7 46";
	DevShotGenerator_Usage() = "55 8B EC 51 56 57 8B F9 80 3F 00 74 7B 8B 35 ? ? ? ? 68 ? ? ? ? FF D6";
	DoExtraBoneProcessing() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 53 56 8B F1 57 89 74 24 1C 80";
	DoProceduralFootPlant() = "55 8B EC 83 E4 F0 83 EC 78 56 8B F1 57 8B 56"; 
	FindElement() = "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28"; 
	FindHudElement() = "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28";  
	GetLayerIdealWeightFromSeqCycle() = "55 8B EC 83 EC 08 53 56 8B 35 ? ? ? ? 57 8B F9 8B CE 8B 06 FF 90";
	GetSequenceActivity() = "55 8B EC 53 8B 5D 08 56 8B F1 83";
	GetSequenceDuration() = "8B 8E ? ? ? ? 85 C9 74 49 83 39 00 74 44 8B 41" - 0x23;
	GetSequenceLinearMotion() = "55 8B EC 83 EC 0C 56 8B F1 57 8B FA 85 F6 75 14 68"; 
	GetShotgunSpread() = "55 8B EC 83 EC 10 56 8B 75 08 8D"; 
	GetToolRecordingState() = "55 8B EC 83 EC 08 53 56 8B F1 8B 0D ? ? ? ? 57 85";  
	GetUserCmd() = "55 8B EC 8B 45 08 56 57 8B F9 83";
	GetWeaponMoveAnimation() = "53 56 57 8B F9 33 F6 8B 4F 60 8B 01 FF 90"; 
	GetWeaponPrefix() = "53 56 57 8B F9 33 F6 8B 4F 60"; 
	GloweEffectSpectator() = "55 8B EC 83 EC 14 53 8B 5D 0C 56 57 85 DB 74"; 
	HasC4() = "56 8B F1 85 F6 74 31 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 ?"; 
	InterpolateServerEntities() = "55 8B EC 83 EC 1C 8B 0D ? ? ? ? 53 "; 
	IsCarryingHostage() = "55 8B EC 8B 09 83 F9 FF"; 
	IsEntityBreakable() = "55 8B EC 51 56 8B F1 85 F6 74 ? 83 BE"; 
	IsInIronsight() = "53 56 8B F1 57 8B 4E 3C 85 C9 0F 84 ? ? ? ? 8B 81"; 
	KeyDown() = "56 57 8B FA 83 C8"; 
	LineGoesThroughSmoke() = "55 8B EC 83 EC 08 8B 15 ? ? ? ? 0F"; 
	LockStudioHdr() = "55 8B EC 51 53 8B D9 56 57 8D B3"; 
	MaintainSequenceTransitions() = "55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 56 57 8B F9 F3" - 0xC;
	OnLand() = "55 8B EC 83 E4 F8 81 EC 28 02 00 00 56 8B F1 F3 0F 11 4C 24 08"; 
	PhysicsRunThink() = "55 8B EC 83 EC 10 53 56 57 8B F9 8B 87 ? ? ? ? C1 E8 16"; 
	PutString() = "55 8B EC 56 57 8B F9 8A"; 
	RevealRanks() = "55 8B EC 8B 0D ? ? ? ? 68"; 
	RunSimulation() = "55 8B EC 83 EC 08 53 8B 5D 10 56 57 FF 75 0C 8B F1 F3 0F 11 55";
	SetAbsAngles() = "55 8B EC 83 E4 F8 83 EC 64 53 56 57 8B F1 E8"; 
	SetAbsOrigin() = "55 8B EC 83 E4 F8 51 53 56 57 8B F1"; 
	SetDormant() = "55 8B EC 53 8B 5D 08 56 8B F1 88 9E ? ? 00 00"; 
	SetUpAimMatrix() = "55 8B EC 81 EC ? ? ? ? 53 56 57 8B 3D"; 
	SetUpLean() = "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 20 F3"; 
	SetUpMovement() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 56 57 8B 3D ? ? ? ? 8B "; 
	SetUpVelocity() = "55 8B EC 83 E4 F8 83 EC 30 56 57 8B 3D"; 
	SetUpWeaponAction() = "55 8B EC 51 53 56 57 8B F9 8B 77 60"; 
	SetUpWholeBodyAction() = "55 8B EC 83 EC 08 56 57 8B F9 8B 77"; 
	SetupBones() = "55 8B EC 83 E4 F0 B8 D8";  
	SetupBonesForAttachmentQueries() = "55 8B EC 83 EC 14 83 3D ? ? ? ? ? 53";
	SetupMovement() = "55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B 7D 08 8B F1 F3";
	ShouldInterpolate() = "A1 ? ? ? ? 56 57 8B F9 8B 30 8D 4F 08"; 
	ShouldSkipAnimationFrame() = "57 8B F9 8B 07 8B 80 ? ? ? ? FF D0 84 C0 75 02"; 
	SolveDependencies() = "55 8B EC 83 E4 F0 81 EC ? ? ? ? 8B 81"; 
	ThreadedBoneSetup() = "55 8B EC 8B 0D ? ? ? ? 83 EC 24"; 
	UTIL_TraceLine() = "55 8B EC 83 E4 F0 83 EC 7C 56 52";
	UpdateTargets() = "55 8B EC 83 E4 F0 81 EC ? ? ? ? 33 D2"; 
	ValidateUserCmd() = "55 8B EC 8B 55 08 3B CA";
	WriteUserCmd() = "55 8B EC 83 E4 F8 51 53 56 8B D9"; 
	WriteUserCmdDeltaToBuffer() = "55 8B EC 83 EC 68 53 56 8B D9 C7";
}

[ENGINE.dll] {
	CL_Move() = "55 8B EC 81 EC ? ? ? ? 53 56 57 8B 3D ? ? ? ? 8A"; 
	CL_SendMove() = "55 8B EC A1 ? ? ? ? 81 EC ? ? ? ? B9 ? ? ? ? 53 8B 98"; 
	ChangeClantag() = "53 56 57 8B DA 8B F9 FF 15";
	FireEventIntern() = "55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 56 57 89 5C 24 0C"; 
}

[SERVER.dll] {
	CCSGOPlayerAnimState::Update() = "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3";
	CStudioHdr::SelectWeightedSequenceFromModifiers() = "55 8B EC 83 EC 2C 53 56 8B 75 08 8B D9";
	ModifyEyePosition() = "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 8B 4F";
	SetupWeaponAction() = "83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 56 8B F1 C6" - 9;
	CCSGameStats::IncrementStat() = "55 8B EC 56 57 8B 7D 08 8B F1 85 FF 0F 84 ? ? ? ? 80";
	PlayerByIndex() = "85 C9 7E 32 A1";
}
