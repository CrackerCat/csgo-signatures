CLIENT | AccumulatePose() = "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ?"; 
CLIENT | AddDependencies() = "55 8B EC 81 EC BC 00 00 00 53 56 57"; 
CLIENT | AddEconItem() = "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 14 53 56 57 8B F9 8B 08"; 
CLIENT | AttachmentHelper() = "55 8B EC 83 EC 48 53 8B 5D 08 89 4D F4"; 
CLIENT | BuildTransformations() = "83 E4 F0 81 EC ? ? ? ? 56 57 8B F9 8B 0D ? ? ? ? 89" - 1; 
CLIENT | CAM_Think() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 56 8B F1 8B 0D ? ? ? ? 57 85 C9"; 
CLIENT | CAchievementMgr::SaveGlobalState() = "55 8B EC 51 53 56 8B F1 8B 0D ? ? ? ? 8B 81"; 
CLIENT | CBaseAchievement::EnsureComponentBitSetAndEvaluate() = "55 8B EC 51 56 8B F1 57 8B 46";
CLIENT | CBaseAchievement::FireGameEvent() = "55 8B EC 56 8B F1 8B 06 8B 40 28";
CLIENT | CBaseAchievement::IncrementCount() = "8B 46 0C 8D 4E 0C 8B 40 14 FF D0 84 C0 0F 85 ? ? ? ? 8B" - 4;
CLIENT | CBaseAchievement::OnComponentEvent() = "55 8B EC 51 8B C1 53 56 33 F6 89 45 FC 8B 58 50";
CLIENT | CBaseEntity::EmitSound() = "55 8B EC 83 EC 4C 53 8B D9 8B "; 
CLIENT | CCSGOPlayerAnimState::Update() = "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3"; 
CLIENT | CC_CL_Find_Ent() = "55 8B EC 51 57 8B 7D 08 8B 07";
CLIENT | CClientShadowMgr::InitDepthTextureShadow() = "55 8B EC 83 EC 54 53 8B D9 8B 0D ? ? ? ? 89"; 
CLIENT | CEffectsList::DrawEffects() = "55 8B EC 83 EC 08 A1 ? ? ? ? 89 4D FC 8B"; 
CLIENT | CMatchmakingStatus::OnEvent() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 53 8B 5D 08 56 57 8B F9 85";
CLIENT | CModelRenderSystem::DrawBrushModels() = "55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B 7D 0C 8B D9"; 
CLIENT | CPanel2D::SetDialogVariable() = "55 8B EC 83 E4 C0 81 EC ? ? ? ? 53 56 8B D9 57 89 5C 24";
CLIENT | C_BaseAnimating::DrawModel() = "55 8B EC 83 EC 14 53 56 8B F1 8B 0D ? ? ? ? 57 89"; 
CLIENT | C_BaseAnimating::FrameAdvance() = "55 8B EC 83 E4 C0 83 EC 38 56 8B"; 
CLIENT | C_BaseAnimating::MaintainSequenceTransitions() = "55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 56 57 8B F9 F3" - 0xC;
CLIENT | C_BaseCombatWeapon::DrawModel() = "55 8B EC 51 56 8B F1 8B 0D ? ? ? ? 57 8B B9"; 
CLIENT | C_BaseEntity::DrawBrushModel() = "68 ? ? ? ? 6A 00 68 ? ? ? ? FF 15 ? ? ? ? 8B 45" - 0x1C; 
CLIENT | C_BaseEntity::InterpolateServerEntities() = "55 8B EC 83 EC 1C 8B 0D ? ? ? ? 53 "; 
CLIENT | C_GameInstructor::Update() = "55 8B EC 83 EC 10 53 8B D9 8B 0D ? ? ? ? 8B"; 
CLIENT | CacheSequences() = "55 8B EC 83 E4 F8 83 EC 34 53 56 8B F1 57 8B"; 
CLIENT | CalcAbsolutePosition() = "55 8B EC 83 E4 F0 83 EC 68 80 3D"; 
CLIENT | CalcAbsoluteVelocity() = "55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B F9 F7"; 
CLIENT | CalcPlayerView() = "84 C0 75 08 57 8B CE E8 ? ? ? ? 8B 06"; 
CLIENT | CalculateView() = "55 8B EC 83 EC 14 53 56 57 FF 75 18"; 
CLIENT | ClearDeathNotices() = "55 8B EC 83 EC 0C 53 56 8B 71 58"; 
CLIENT | ClearNotices() = "55 8B EC 83 EC 0C 53 56 8B 71 58"; 
CLIENT | ClipRayToHitbox() = "55 8B EC 83 E4 F8 F3 0F 10 42"; 
CLIENT | CreateAnimationState() = "55 8B EC 56 8B F1 B9 ? ? ? ? C7 46"; 
CLIENT | CreateMove() = "55 8B EC 8B 0D ? ? ? ? 85 C9 75 06 B0"; 
CLIENT | DoProceduralFootPlant() = "55 8B EC 83 E4 F8 81 EC FC 00 00 00 53 56 8B F1 57"; 
CLIENT | FindElement() = "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28"; 
CLIENT | FindHudElement() = "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28"; 
CLIENT | FrameStageNotify() = "55 8B EC 8B 0D ? ? ? ? 8B 01 8B 80 ? ? ? ? FF D0 A2"; 
CLIENT | GetEyePosition() = "55 8B EC 56 8B 75 08 57 8B F9 56 8B 07 FF 90"; 
CLIENT | GetSequenceActivity() = "55 8B EC 53 8B 5D 08 56 8B F1 83"
CLIENT | GetSequenceLinearMotion() = "55 8B EC 83 EC 0C 56 8B F1 57 8B FA 85 F6 75 14 68"; 
CLIENT | GetShotgunSpread() = "55 8B EC 83 EC 10 56 8B 75 08 8D"; 
CLIENT | GetToolRecordingState() = "55 8B EC 83 EC 08 53 56 8B F1 8B 0D ? ? ? ? 57 85"; 
CLIENT | GetViewmodelFOV() = "55 8B EC 8B 0D ? ? ? ? 83 EC 08 57"; 
CLIENT | GetWeaponMoveAnimation() = "53 56 57 8B F9 33 F6 8B 4F 60 8B 01 FF 90"; 
CLIENT | GetWeaponPrefix() = "53 56 57 8B F9 33 F6 8B 4F 60"; 
CLIENT | GloweEffectSpectator() = "55 8B EC 83 EC 14 53 8B 5D 0C 56 57 85 DB 74"; 
CLIENT | HasC4() = "56 8B F1 85 F6 74 31 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 ?"; 
CLIENT | InvalidatePhysicsRecursive() = "55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C3 56 83 E0 04"; 
CLIENT | IsCarryingHostage() = "55 8B EC 8B 09 83 F9 FF"; 
CLIENT | IsEntityBreakable() = "55 8B EC 51 56 8B F1 85 F6 74 ? 83 BE"; 
CLIENT | IsInIronsight() = "53 56 8B F1 57 8B 4E 3C 85 C9 0F 84 ? ? ? ? 8B 81"; 
CLIENT | KeyDown() = "56 57 8B FA 83 C8"; 
CLIENT | LineGoesThroughSmoke() = "55 8B EC 83 EC 08 8B 15 ? ? ? ? 0F"; 
CLIENT | LockStudioHdr() = "55 8B EC 51 53 8B D9 56 57 8D B3"; 
CLIENT | LookupSequence() = "85 C0 74 07 8B CE E8 ? ? ? ? 8B B6 ? ? ? ? 85 F6 74" - 0x18; 
CLIENT | ModifyEyePosition() = "55 8B EC 83 E4 F8 83 EC 5C 53 8B D9 56 57 83"; 
CLIENT | OnLand() = "55 8B EC 83 E4 F8 81 EC 28 02 00 00 56 8B F1 F3 0F 11 4C 24 08"; 
CLIENT | PhysicsRunThink() = "55 8B EC 83 EC 10 53 56 57 8B F9 8B 87 ? ? ? ? C1 E8 16"; 
CLIENT | PutString() = "55 8B EC 56 57 8B F9 8A"; 
CLIENT | RecordBones() = "C3 55 8B EC 83 E4 F8 81 EC ? ? ? ? 53 56 8B F1 8B 0D" + 2; 
CLIENT | RevealRanks() = "55 8B EC 8B 0D ? ? ? ? 68"; 
CLIENT | SetAbsAngles() = "55 8B EC 83 E4 F8 83 EC 64 53 56 57 8B F1 E8"; 
CLIENT | SetAbsOrigin() = "55 8B EC 83 E4 F8 51 53 56 57 8B F1"; 
CLIENT | SetDormant() = "55 8B EC 53 8B 5D 08 56 8B F1 88 9E ? ? 00 00"; 
CLIENT | SetUpAimMatrix() = "55 8B EC 81 EC ? ? ? ? 53 56 57 8B 3D"; 
CLIENT | SetUpLean() = "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 20 F3"; 
CLIENT | SetUpMovement() = "8B EC 83 E4 F8 81 EC ? ? ? ? 56 57 8B 3D ? ? ? ? 8B " - 1; 
CLIENT | SetUpVelocity() = "55 8B EC 83 E4 F8 83 EC 30 56 57 8B 3D"; 
CLIENT | SetUpWeaponAction() = "55 8B EC 51 53 56 57 8B F9 8B 77 60"; 
CLIENT | SetUpWholeBodyAction() = "55 8B EC 83 EC 08 56 57 8B F9 8B 77"; 
CLIENT | SetupBones() = "55 8B EC 83 E4 F0 B8 D8"; 
CLIENT | SetupMovement() = "8B EC 83 E4 F8 83 EC 0C 53 56 57 8B 7D 08 8B F1 F3" - 1;  
CLIENT | ShouldInterpolate() = "A1 ? ? ? ? 56 57 8B F9 8B 30 8D 4F 08"; 
CLIENT | ShouldSkipAnimationFrame() = "57 8B F9 8B 07 8B 80 ? ? ? ? FF D0 84 C0 75 02"; 
CLIENT | SolveDependencies() = "55 8B EC 83 E4 F0 81 EC ? ? ? ? 8B 81"; 
CLIENT | StandardBlendingRules() = "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 8B 75 08 57 8B F9 85 F6"; 
CLIENT | ThreadedBoneSetup() = "55 8B EC 8B 0D ? ? ? ? 83 EC 24"; 
CLIENT | UTIL_TraceLine() = "55 8B EC 83 E4 F0 83 EC 7C 56 52";
CLIENT | UpdateClientsideAnimation() = "55 8B EC 51 56 8B F1 80 BE ? ? ? ? ? 74 36"; 
CLIENT | UpdateTargets() = "55 8B EC 83 E4 F0 81 EC ? ? ? ? 33 D2"; 
CLIENT | WriteUserCmd() = "55 8B EC 83 E4 F8 51 53 56 8B D9"; 
CLIENT | WriteUserCmdDeltaToBuffer() = "55 8B EC 83 EC 68 53 56 8B D9 C7"; 
ENGINE | CL_Move() = "55 8B EC 81 EC ? ? ? ? 53 56 57 8B 3D ? ? ? ? 8A"; 
ENGINE | CL_SendMove() = "55 8B EC A1 ? ? ? ? 81 EC ? ? ? ? B9 ? ? ? ? 53 8B 98"; 
ENGINE | ChngeClantag() = "53 56 57 8B DA 8B F9 FF 15";
ENGINE | FireEventIntern() = "55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 56 57 89 5C 24 0C"; 
