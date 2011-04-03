/*
 *
 * UruLive typecodes (from client version 9.847)
 *
 */

#ifndef _TYPECODES_H_
#define _TYPECODES_H_

#define plSceneNode 0x0000
#define plSceneObject 0x0001
#define hsKeyedObject 0x0002
#define plBitmap 0x0003
#define plMipmap 0x0004
#define plCubicEnvironmap 0x0005
#define plLayer 0x0006
#define hsGMaterial 0x0007
#define plParticleSystem 0x0008
#define plParticleEffect 0x0009
#define plParticleCollisionEffectBeat 0x000A
#define plParticleFadeVolumeEffect 0x000B
#define plBoundInterface 0x000C
#define plRenderTarget 0x000D
#define plCubicRenderTarget 0x000E
#define plCubicRenderTargetModifier 0x000F
#define plObjInterface 0x0010
#define plAudioInterface 0x0011
#define plAudible 0x0012
#define plAudibleNull 0x0013
#define plWinAudible 0x0014
#define plCoordinateInterface 0x0015
#define plDrawInterface 0x0016
#define plDrawable 0x0017
#define plDrawableMesh 0x0018
#define plDrawableIce 0x0019
#define plPhysical 0x001A
#define plPhysicalMesh 0x001B
#define plSimulationInterface 0x001C
#define plCameraModifier 0x001D
#define plModifier 0x001E
#define plSingleModifier 0x001F
#define plSimpleModifier 0x0020
#define pfSecurePreloader 0x0021
#define UNUSED_plRandomTMModifier 0x0022
#define plInterestingModifier 0x0023
#define plDetectorModifier 0x0024
#define plSimplePhysicalMesh 0x0025
#define plCompoundPhysicalMesh 0x0026
#define plMultiModifier 0x0027
#define plSynchedObject 0x0028
#define plSoundBuffer 0x0029
#define UNUSED_plAliasModifier 0x002A
#define plPickingDetector 0x002B
#define plCollisionDetector 0x002C
#define plLogicModifier 0x002D
#define plConditionalObject 0x002E
#define plANDConditionalObject 0x002F
#define plORConditionalObject 0x0030
#define plPickedConditionalObject 0x0031
#define plActivatorConditionalObject 0x0032
#define plTimerCallbackManager 0x0033
#define plKeyPressConditionalObject 0x0034
#define plAnimationEventConditionalObject 0x0035
#define plControlEventConditionalObject 0x0036
#define plObjectInBoxConditionalObject 0x0037
#define plLocalPlayerInBoxConditionalObject 0x0038
#define plObjectIntersectPlaneConditionalObject 0x0039
#define plLocalPlayerIntersectPlaneConditionalObject 0x003A
#define plPortalDrawable 0x003B
#define plPortalPhysical 0x003C
#define plSpawnModifier 0x003D
#define plFacingConditionalObject 0x003E
#define plPXPhysical 0x003F
#define plViewFaceModifier 0x0040
#define plLayerInterface 0x0041
#define plLayerWrapper 0x0042
#define plLayerAnimation 0x0043
#define plLayerDepth 0x0044
#define plLayerMovie 0x0045
#define plLayerBink 0x0046
#define plLayerAVI 0x0047
#define plSound 0x0048
#define plWin32Sound 0x0049
#define plLayerOr 0x004A
#define plAudioSystem 0x004B
#define plDrawableSpans 0x004C
#define UNUSED_plDrawablePatchSet 0x004D
#define plInputManager 0x004E
#define plLogicModBase 0x004F
#define plFogEnvironment 0x0050
#define plNetApp 0x0051
#define plNetClientMgr 0x0052
#define pl2WayWinAudible 0x0053
#define plLightInfo 0x0054
#define plDirectionalLightInfo 0x0055
#define plOmniLightInfo 0x0056
#define plSpotLightInfo 0x0057
#define plLightSpace 0x0058
#define plNetClientApp 0x0059
#define plNetServerApp 0x005A
#define plClient 0x005B
#define UNUSED_plCompoundTMModifier 0x005C
#define plCameraBrain 0x005D
#define plCameraBrain_Default 0x005E
#define plCameraBrain_Drive 0x005F
#define plCameraBrain_Fixed 0x0060
#define plCameraBrain_FixedPan 0x0061
#define pfGUIClickMapCtrl 0x0062
#define plListener 0x0063
#define plAvatarMod 0x0064
#define plAvatarAnim 0x0065
#define plAvatarAnimMgr 0x0066
#define plOccluder 0x0067
#define plMobileOccluder 0x0068
#define plLayerShadowBase 0x0069
#define plLimitedDirLightInfo 0x006A
#define plAGAnim 0x006B
#define plAGModifier 0x006C
#define plAGMasterMod 0x006D
#define plCameraBrain_Avatar 0x006E
#define plCameraRegionDetector 0x006F
#define plCameraBrain_FP 0x0070
#define plLineFollowMod 0x0071
#define plLightModifier 0x0072
#define plOmniModifier 0x0073
#define plSpotModifier 0x0074
#define plLtdDirModifier 0x0075
#define plSeekPointMod 0x0076
#define plOneShotMod 0x0077
#define plRandomCommandMod 0x0078
#define plRandomSoundMod 0x0079
#define plPostEffectMod 0x007A
#define plObjectInVolumeDetector 0x007B
#define plResponderModifier 0x007C
#define plAxisAnimModifier 0x007D
#define plLayerLightBase 0x007E
#define plFollowMod 0x007F
#define plTransitionMgr 0x0080
#define UNUSED___plInventoryMod 0x0081
#define UNUSED___plInventoryObjMod 0x0082
#define plLinkEffectsMgr 0x0083
#define plWin32StreamingSound 0x0084
#define UNUSED___plPythonMod 0x0085
#define plActivatorActivatorConditionalObject 0x0086
#define plSoftVolume 0x0087
#define plSoftVolumeSimple 0x0088
#define plSoftVolumeComplex 0x0089
#define plSoftVolumeUnion 0x008A
#define plSoftVolumeIntersect 0x008B
#define plSoftVolumeInvert 0x008C
#define plWin32LinkSound 0x008D
#define plLayerLinkAnimation 0x008E
#define plArmatureMod 0x008F
#define plCameraBrain_Freelook 0x0090
#define plHavokConstraintsMod 0x0091
#define plHingeConstraintMod 0x0092
#define plWheelConstraintMod 0x0093
#define plStrongSpringConstraintMod 0x0094
#define plArmatureLODMod 0x0095
#define plWin32StaticSound 0x0096
#define pfGameGUIMgr 0x0097
#define pfGUIDialogMod 0x0098
#define plCameraBrain1 0x0099
#define plVirtualCam1 0x009A
#define plCameraModifier1 0x009B
#define plCameraBrain1_Drive 0x009C
#define plCameraBrain1_POA 0x009D
#define plCameraBrain1_Avatar 0x009E
#define plCameraBrain1_Fixed 0x009F
#define plCameraBrain1_POAFixed 0x00A0
#define pfGUIButtonMod 0x00A1
#define plPythonFileMod 0x00A2
#define pfGUIControlMod 0x00A3
#define plExcludeRegionModifier 0x00A4
#define pfGUIDraggableMod 0x00A5
#define plVolumeSensorConditionalObject 0x00A6
#define plVolActivatorConditionalObject 0x00A7
#define plMsgForwarder 0x00A8
#define plBlower 0x00A9
#define pfGUIListBoxMod 0x00AA
#define pfGUITextBoxMod 0x00AB
#define pfGUIEditBoxMod 0x00AC
#define plDynamicTextMap 0x00AD
#define plSittingModifier 0x00AE
#define pfGUIUpDownPairMod 0x00AF
#define pfGUIValueCtrl 0x00B0
#define pfGUIKnobCtrl 0x00B1
#define plAvLadderMod 0x00B2
#define plCameraBrain1_FirstPerson 0x00B3
#define plCloneSpawnModifier 0x00B4
#define plClothingItem 0x00B5
#define plClothingOutfit 0x00B6
#define plClothingBase 0x00B7
#define plClothingMgr 0x00B8
#define pfGUIDragBarCtrl 0x00B9
#define pfGUICheckBoxCtrl 0x00BA
#define pfGUIRadioGroupCtrl 0x00BB
#define pfPlayerBookMod 0x00BC
#define pfGUIDynDisplayCtrl 0x00BD
#define UNUSED_plLayerProject 0x00BE
#define plInputInterfaceMgr 0x00BF
#define plRailCameraMod 0x00C0
#define plMultistageBehMod 0x00C1
#define plCameraBrain1_Circle 0x00C2
#define plParticleWindEffect 0x00C3
#define plAnimEventModifier 0x00C4
#define plAutoProfile 0x00C5
#define pfGUISkin 0x00C6
#define plAVIWriter 0x00C7
#define plParticleCollisionEffect 0x00C8
#define plParticleCollisionEffectDie 0x00C9
#define plParticleCollisionEffectBounce 0x00CA
#define plInterfaceInfoModifier 0x00CB
#define plSharedMesh 0x00CC
#define plArmatureEffectsMgr 0x00CD
#define pfMarkerMgr 0x00CE
#define plVehicleModifier 0x00CF
#define plParticleLocalWind 0x00D0
#define plParticleUniformWind 0x00D1
#define plInstanceDrawInterface 0x00D2
#define plShadowMaster 0x00D3
#define plShadowCaster 0x00D4
#define plPointShadowMaster 0x00D5
#define plDirectShadowMaster 0x00D6
#define plSDLModifier 0x00D7
#define plPhysicalSDLModifier 0x00D8
#define plClothingSDLModifier 0x00D9
#define plAvatarSDLModifier 0x00DA
#define plAGMasterSDLModifier 0x00DB
#define plPythonSDLModifier 0x00DC
#define plLayerSDLModifier 0x00DD
#define plAnimTimeConvertSDLModifier 0x00DE
#define plResponderSDLModifier 0x00DF
#define plSoundSDLModifier 0x00E0
#define plResManagerHelper 0x00E1
#define plAvatarPhysicalSDLModifier 0x00E2
#define plArmatureEffect 0x00E3
#define plArmatureEffectFootSound 0x00E4
#define plEAXListenerMod 0x00E5
#define plDynaDecalMgr 0x00E6
#define plObjectInVolumeAndFacingDetector 0x00E7
#define plDynaFootMgr 0x00E8
#define plDynaRippleMgr 0x00E9
#define plDynaBulletMgr 0x00EA
#define plDecalEnableMod 0x00EB
#define plPrintShape 0x00EC
#define plDynaPuddleMgr 0x00ED
#define pfGUIMultiLineEditCtrl 0x00EE
#define plLayerAnimationBase 0x00EF
#define plLayerSDLAnimation 0x00F0
#define plATCAnim 0x00F1
#define plAgeGlobalAnim 0x00F2
#define plSubworldRegionDetector 0x00F3
#define plAvatarMgr 0x00F4
#define plNPCSpawnMod 0x00F5
#define plActivePrintShape 0x00F6
#define plExcludeRegionSDLModifier 0x00F7
#define plLOSDispatch 0x00F8
#define plDynaWakeMgr 0x00F9
#define plSimulationMgr 0x00FA
#define plWaveSet7 0x00FB
#define plPanicLinkRegion 0x00FC
#define plWin32GroupedSound 0x00FD
#define plFilterCoordInterface 0x00FE
#define plStereizer 0x00FF
#define plCCRMgr 0x0100
#define plCCRSpecialist 0x0101
#define plCCRSeniorSpecialist 0x0102
#define plCCRShiftSupervisor 0x0103
#define plCCRGameOperator 0x0104
#define plShader 0x0105
#define plDynamicEnvMap 0x0106
#define plSimpleRegionSensor 0x0107
#define plMorphSequence 0x0108
#define plEmoteAnim 0x0109
#define plDynaRippleVSMgr 0x010A
#define UNUSED_plWaveSet6 0x010B
#define pfGUIProgressCtrl 0x010C
#define plMaintainersMarkerModifier 0x010D
#define plMorphSequenceSDLMod 0x010E
#define plMorphDataSet 0x010F
#define plHardRegion 0x0110
#define plHardRegionPlanes 0x0111
#define plHardRegionComplex 0x0112
#define plHardRegionUnion 0x0113
#define plHardRegionIntersect 0x0114
#define plHardRegionInvert 0x0115
#define plVisRegion 0x0116
#define plVisMgr 0x0117
#define plRegionBase 0x0118
#define pfGUIPopUpMenu 0x0119
#define pfGUIMenuItem 0x011A
#define plCoopCoordinator 0x011B
#define plFont 0x011C
#define plFontCache 0x011D
#define plRelevanceRegion 0x011E
#define plRelevanceMgr 0x011F
#define pfJournalBook 0x0120
#define plLayerTargetContainer 0x0121
#define plImageLibMod 0x0122
#define plParticleFlockEffect 0x0123
#define plParticleSDLMod 0x0124
#define plAgeLoader 0x0125
#define plWaveSetBase 0x0126
#define plPhysicalSndGroup 0x0127
#define pfBookData 0x0128
#define plDynaTorpedoMgr 0x0129
#define plDynaTorpedoVSMgr 0x012A
#define plClusterGroup 0x012B
#define plGameMarkerModifier 0x012C
#define plLODMipmap 0x012D
#define plSwimDetector 0x012E
#define plFadeOpacityMod 0x012F
#define plFadeOpacityLay 0x0130
#define plDistOpacityMod 0x0131
#define plArmatureModBase 0x0132
#define plSwimRegionInterface 0x0133
#define plSwimCircularCurrentRegion 0x0134
#define plParticleFollowSystemEffect 0x0135
#define plSwimStraightCurrentRegion 0x0136
#define pfObjectFlocker 0x0137
#define plGrassShaderMod 0x0138
#define plDynamicCamMap 0x0139
#define plRidingAnimatedPhysicalDetector 0x013A
#define plVolumeSensorConditionalObjectNoArbitration 0x013B

#define plObjRefMsg 0x0200
#define plNodeRefMsg 0x0201
#define plMessage 0x0202
#define plRefMsg 0x0203
#define plGenRefMsg 0x0204
#define plTimeMsg 0x0205
#define plAnimCmdMsg 0x0206
#define plParticleUpdateMsg 0x0207
#define plLayRefMsg 0x0208
#define plMatRefMsg 0x0209
#define plCameraMsg 0x020A
#define plInputEventMsg 0x020B
#define plKeyEventMsg 0x020C
#define plMouseEventMsg 0x020D
#define plEvalMsg 0x020E
#define plTransformMsg 0x020F
#define plControlEventMsg 0x0210
#define plVaultCCRNode 0x0211
#define plLOSRequestMsg 0x0212
#define plLOSHitMsg 0x0213
#define plSingleModMsg 0x0214
#define plMultiModMsg 0x0215
#define plAvatarPhysicsEnableCallbackMsg 0x0216
#define plMemberUpdateMsg 0x0217
#define plNetMsgPagingRoom 0x0218
#define plActivatorMsg 0x0219
#define plDispatch 0x021A
#define plReceiver 0x021B
#define plMeshRefMsg 0x021C
#define hsGRenderProcs 0x021D
#define hsSfxAngleFade 0x021E
#define hsSfxDistFade 0x021F
#define hsSfxDistShade 0x0220
#define hsSfxGlobalShade 0x0221
#define hsSfxIntenseAlpha 0x0222
#define hsSfxObjDistFade 0x0223
#define hsSfxObjDistShade 0x0224
#define hsDynamicValue 0x0225
#define hsDynamicScalar 0x0226
#define hsDynamicColorRGBA 0x0227
#define hsDynamicMatrix33 0x0228
#define hsDynamicMatrix44 0x0229
#define plOmniSqApplicator 0x022A
#define plPreResourceMsg 0x022B
#define UNUSED_hsDynamicColorRGBA 0x022C
#define UNUSED_hsDynamicMatrix33 0x022D
#define UNUSED_hsDynamicMatrix44 0x022E
#define plController 0x022F
#define plLeafController 0x0230
#define plCompoundController 0x0231
#define UNUSED_plRotController 0x0232
#define UNUSED_plPosController 0x0233
#define UNUSED_plScalarController 0x0234
#define UNUSED_plPoint3Controller 0x0235
#define UNUSED_plScaleValueController 0x0236
#define UNUSED_plQuatController 0x0237
#define UNUSED_plMatrix33Controller 0x0238
#define UNUSED_plMatrix44Controller 0x0239
#define UNUSED_plEaseController 0x023A
#define UNUSED_plSimpleScaleController 0x023B
#define UNUSED_plSimpleRotController 0x023C
#define plCompoundRotController 0x023D
#define UNUSED_plSimplePosController 0x023E
#define plCompoundPosController 0x023F
#define plTMController 0x0240
#define hsFogControl 0x0241
#define plIntRefMsg 0x0242
#define plCollisionReactor 0x0243
#define plCorrectionMsg 0x0244
#define plPhysicalModifier 0x0245
#define plPickedMsg 0x0246
#define plCollideMsg 0x0247
#define plTriggerMsg 0x0248
#define plInterestingModMsg 0x0249
#define plDebugKeyEventMsg 0x024A
#define plPhysicalProperties_DEAD 0x024B
#define plSimplePhys 0x024C
#define plMatrixUpdateMsg 0x024D
#define plCondRefMsg 0x024E
#define plTimerCallbackMsg 0x024F
#define plEventCallbackMsg 0x0250
#define plSpawnModMsg 0x0251
#define plSpawnRequestMsg 0x0252
#define plLoadCloneMsg 0x0253
#define plEnableMsg 0x0254
#define plWarpMsg 0x0255
#define plAttachMsg 0x0256
#define pfConsole 0x0257
#define plRenderMsg 0x0258
#define plAnimTimeConvert 0x0259
#define plSoundMsg 0x025A
#define plInterestingPing 0x025B
#define plNodeCleanupMsg 0x025C
#define plSpaceTree 0x025D
#define plNetMessage 0x025E
#define plNetMsgJoinReq 0x025F
#define plNetMsgJoinAck 0x0260
#define plNetMsgLeave 0x0261
#define plNetMsgPing 0x0262
#define plNetMsgRoomsList 0x0263
#define plNetMsgGroupOwner 0x0264
#define plNetMsgGameStateRequest 0x0265
#define plNetMsgSessionReset 0x0266
#define plNetMsgOmnibus 0x0267
#define plNetMsgObject 0x0268
#define plCCRInvisibleMsg 0x0269
#define plLinkInDoneMsg 0x026A
#define plNetMsgGameMessage 0x026B
#define plNetMsgStream 0x026C
#define plAudioSysMsg 0x026D
#define plDispatchBase 0x026E
#define plServerReplyMsg 0x026F
#define plDeviceRecreateMsg 0x0270
#define plNetMsgStreamHelper 0x0271
#define plNetMsgObjectHelper 0x0272
#define plIMouseXEventMsg 0x0273
#define plIMouseYEventMsg 0x0274
#define plIMouseBEventMsg 0x0275
#define plLogicTriggerMsg 0x0276
#define plPipeline 0x0277
#define plDXPipeline 0x0278
#define plNetMsgVoice 0x0279
#define plLightRefMsg 0x027A
#define plNetMsgStreamedObject 0x027B
#define plNetMsgSharedState 0x027C
#define plNetMsgTestAndSet 0x027D
#define plNetMsgGetSharedState 0x027E
#define plSharedStateMsg 0x027F
#define plNetGenericServerTask 0x0280
#define plNetClientMgrMsg 0x0281
#define plLoadAgeMsg 0x0282
#define plMessageWithCallbacks 0x0283
#define plClientMsg 0x0284
#define plClientRefMsg 0x0285
#define plNetMsgObjStateRequest 0x0286
#define plCCRPetitionMsg 0x0287
#define plVaultCCRInitializationTask 0x0288
#define plNetServerMsg 0x0289
#define plNetServerMsgWithContext 0x028A
#define plNetServerMsgRegisterServer 0x028B
#define plNetServerMsgUnregisterServer 0x028C
#define plNetServerMsgStartProcess 0x028D
#define plNetServerMsgRegisterProcess 0x028E
#define plNetServerMsgUnregisterProcess 0x028F
#define plNetServerMsgFindProcess 0x0290
#define plNetServerMsgProcessFound 0x0291
#define plNetMsgRoutingInfo 0x0292
#define plNetServerSessionInfo 0x0293
#define plSimulationMsg 0x0294
#define plSimulationSynchMsg 0x0295
#define plHKSimulationSynchMsg 0x0296
#define plAvatarMsg 0x0297
#define plAvTaskMsg 0x0298
#define plAvSeekMsg 0x0299
#define plAvOneShotMsg 0x029A
#define plSatisfiedMsg 0x029B
#define plNetMsgObjectListHelper 0x029C
#define plNetMsgObjectUpdateFilter 0x029D
#define plProxyDrawMsg 0x029E
#define plSelfDestructMsg 0x029F
#define plSimInfluenceMsg 0x02A0
#define plForceMsg 0x02A1
#define plOffsetForceMsg 0x02A2
#define plTorqueMsg 0x02A3
#define plImpulseMsg 0x02A4
#define plOffsetImpulseMsg 0x02A5
#define plAngularImpulseMsg 0x02A6
#define plDampMsg 0x02A7
#define plShiftMassMsg 0x02A8
#define plSimStateMsg 0x02A9
#define plFreezeMsg 0x02AA
#define plEventGroupMsg 0x02AB
#define plSuspendEventMsg 0x02AC
#define plNetMsgMembersListReq 0x02AD
#define plNetMsgMembersList 0x02AE
#define plNetMsgMemberInfoHelper 0x02AF
#define plNetMsgMemberListHelper 0x02B0
#define plNetMsgMemberUpdate 0x02B1
#define plNetMsgServerToClient 0x02B2
#define plNetMsgCreatePlayer 0x02B3
#define plNetMsgAuthenticateHello 0x02B4
#define plNetMsgAuthenticateChallenge 0x02B5
#define plConnectedToVaultMsg 0x02B6
#define plCCRCommunicationMsg 0x02B7
#define plNetMsgInitialAgeStateSent 0x02B8
#define plInitialAgeStateLoadedMsg 0x02B9
#define plNetServerMsgFindServerBase 0x02BA
#define plNetServerMsgFindServerReplyBase 0x02BB
#define plNetServerMsgFindAuthServer 0x02BC
#define plNetServerMsgFindAuthServerReply 0x02BD
#define plNetServerMsgFindVaultServer 0x02BE
#define plNetServerMsgFindVaultServerReply 0x02BF
#define plAvTaskSeekDoneMsg 0x02C0
#define plNCAgeJoinerMsg 0x02C1
#define plNetServerMsgVaultTask 0x02C2
#define plNetMsgVaultTask 0x02C3
#define plAgeLinkStruct 0x02C4
#define plVaultAgeInfoNode 0x02C5
#define plNetMsgStreamableHelper 0x02C6
#define plNetMsgReceiversListHelper 0x02C7
#define plNetMsgListenListUpdate 0x02C8
#define plNetServerMsgPing 0x02C9
#define plNetMsgAlive 0x02CA
#define plNetMsgTerminated 0x02CB
#define plSDLModifierMsg 0x02CC
#define plNetMsgSDLState 0x02CD
#define plNetServerMsgSessionReset 0x02CE
#define plCCRBanLinkingMsg 0x02CF
#define plCCRSilencePlayerMsg 0x02D0
#define plRenderRequestMsg 0x02D1
#define plRenderRequestAck 0x02D2
#define plNetMember 0x02D3
#define plNetGameMember 0x02D4
#define plNetTransportMember 0x02D5
#define plConvexVolume 0x02D6
#define plParticleGenerator 0x02D7
#define plSimpleParticleGenerator 0x02D8
#define plParticleEmitter 0x02D9
#define plAGChannel 0x02DA
#define plMatrixChannel 0x02DB
#define plMatrixTimeScale 0x02DC
#define plMatrixBlend 0x02DD
#define plMatrixControllerChannel 0x02DE
#define plQuatPointCombine 0x02DF
#define plPointChannel 0x02E0
#define plPointConstant 0x02E1
#define plPointBlend 0x02E2
#define plQuatChannel 0x02E3
#define plQuatConstant 0x02E4
#define plQuatBlend 0x02E5
#define plLinkToAgeMsg 0x02E6
#define plPlayerPageMsg 0x02E7
#define plCmdIfaceModMsg 0x02E8
#define plNetServerMsgPlsUpdatePlayer 0x02E9
#define plListenerMsg 0x02EA
#define plAnimPath 0x02EB
#define plClothingUpdateBCMsg 0x02EC
#define plNotifyMsg 0x02ED
#define plFakeOutMsg 0x02EE
#define plCursorChangeMsg 0x02EF
#define plNodeChangeMsg 0x02F0
#define UNUSED_plAvEnableMsg 0x02F1
#define plLinkCallbackMsg 0x02F2
#define plTransitionMsg 0x02F3
#define plConsoleMsg 0x02F4
#define plVolumeIsect 0x02F5
#define plSphereIsect 0x02F6
#define plConeIsect 0x02F7
#define plCylinderIsect 0x02F8
#define plParallelIsect 0x02F9
#define plConvexIsect 0x02FA
#define plComplexIsect 0x02FB
#define plUnionIsect 0x02FC
#define plIntersectionIsect 0x02FD
#define plModulator 0x02FE
#define UNUSED___plInventoryMsg 0x02FF
#define plLinkEffectsTriggerMsg 0x0300
#define plLinkEffectBCMsg 0x0301
#define plResponderEnableMsg 0x0302
#define plNetServerMsgHello 0x0303
#define plNetServerMsgHelloReply 0x0304
#define plNetServerMember 0x0305
#define plResponderMsg 0x0306
#define plOneShotMsg 0x0307
#define plVaultAgeInfoListNode 0x0308
#define plNetServerMsgServerRegistered 0x0309
#define plPointTimeScale 0x030A
#define plPointControllerChannel 0x030B
#define plQuatTimeScale 0x030C
#define plAGApplicator 0x030D
#define plMatrixChannelApplicator 0x030E
#define plPointChannelApplicator 0x030F
#define plLightDiffuseApplicator 0x0310
#define plLightAmbientApplicator 0x0311
#define plLightSpecularApplicator 0x0312
#define plOmniApplicator 0x0313
#define plQuatChannelApplicator 0x0314
#define plScalarChannel 0x0315
#define plScalarTimeScale 0x0316
#define plScalarBlend 0x0317
#define plScalarControllerChannel 0x0318
#define plScalarChannelApplicator 0x0319
#define plSpotInnerApplicator 0x031A
#define plSpotOuterApplicator 0x031B
#define plNetServerMsgPlsRoutableMsg 0x031C
#define _UNUSED_plPuppetBrainMsg 0x031D
#define plATCEaseCurve 0x031E
#define plConstAccelEaseCurve 0x031F
#define plSplineEaseCurve 0x0320
#define plVaultAgeInfoInitializationTask 0x0321
#define pfGameGUIMsg 0x0322
#define plNetServerMsgVaultRequestGameState 0x0323
#define plNetServerMsgVaultGameState 0x0324
#define plNetServerMsgVaultGameStateSave 0x0325
#define plNetServerMsgVaultGameStateSaved 0x0326
#define plNetServerMsgVaultGameStateLoad 0x0327
#define plNetClientTask 0x0328
#define plNetMsgSDLStateBCast 0x0329
#define plReplaceGeometryMsg 0x032A
#define plNetServerMsgExitProcess 0x032B
#define plNetServerMsgSaveGameState 0x032C
#define plDniCoordinateInfo 0x032D
#define plNetMsgGameMessageDirected 0x032E
#define plLinkOutUnloadMsg 0x032F
#define plScalarConstant 0x0330
#define plMatrixConstant 0x0331
#define plAGCmdMsg 0x0332
#define plParticleTransferMsg 0x0333
#define plParticleKillMsg 0x0334
#define plExcludeRegionMsg 0x0335
#define plOneTimeParticleGenerator 0x0336
#define plParticleApplicator 0x0337
#define plParticleLifeMinApplicator 0x0338
#define plParticleLifeMaxApplicator 0x0339
#define plParticlePPSApplicator 0x033A
#define plParticleAngleApplicator 0x033B
#define plParticleVelMinApplicator 0x033C
#define plParticleVelMaxApplicator 0x033D
#define plParticleScaleMinApplicator 0x033E
#define plParticleScaleMaxApplicator 0x033F
#define plDynamicTextMsg 0x0340
#define plCameraTargetFadeMsg 0x0341
#define plAgeLoadedMsg 0x0342
#define plPointControllerCacheChannel 0x0343
#define plScalarControllerCacheChannel 0x0344
#define plLinkEffectsTriggerPrepMsg 0x0345
#define plLinkEffectPrepBCMsg 0x0346
#define plAvatarInputStateMsg 0x0347
#define plAgeInfoStruct 0x0348
#define plSDLNotificationMsg 0x0349
#define plNetClientConnectAgeVaultTask 0x034A
#define plLinkingMgrMsg 0x034B
#define plVaultNotifyMsg 0x034C
#define plPlayerInfo 0x034D
#define plSwapSpansRefMsg 0x034E
#define pfKI 0x034F
#define plDISpansMsg 0x0350
#define plNetMsgCreatableHelper 0x0351
#define plCreatableUuid 0x0352
#define plNetMsgRequestMyVaultPlayerList 0x0353
#define plDelayedTransformMsg 0x0354
#define plSuperVNodeMgrInitTask 0x0355
#define plElementRefMsg 0x0356
#define plClothingMsg 0x0357
#define plEventGroupEnableMsg 0x0358
#define pfGUINotifyMsg 0x0359
#define UNUSED_plAvBrain 0x035A
#define plArmatureBrain 0x035B
#define plAvBrainHuman 0x035C
#define plAvBrainCritter 0x035D
#define plAvBrainDrive 0x035E
#define plAvBrainSample 0x035F
#define plAvBrainGeneric 0x0360
#define plPreloaderMsg 0x0361
#define plAvBrainLadder 0x0362
#define plInputIfaceMgrMsg 0x0363
#define pfKIMsg 0x0364
#define plRemoteAvatarInfoMsg 0x0365
#define plMatrixDelayedCorrectionApplicator 0x0366
#define plAvPushBrainMsg 0x0367
#define plAvPopBrainMsg 0x0368
#define plRoomLoadNotifyMsg 0x0369
#define plAvTask 0x036A
#define plAvAnimTask 0x036B
#define plAvSeekTask 0x036C
#define plNetCommAuthConnectedMsg 0x036D
#define plAvOneShotTask 0x036E
#define UNUSED_plAvEnableTask 0x036F
#define plAvTaskBrain 0x0370
#define plAnimStage 0x0371
#define plNetClientMember 0x0372
#define plNetClientCommTask 0x0373
#define plNetServerMsgAuthRequest 0x0374
#define plNetServerMsgAuthReply 0x0375
#define plNetClientCommAuthTask 0x0376
#define plClientGuid 0x0377
#define plNetMsgVaultPlayerList 0x0378
#define plNetMsgSetMyActivePlayer 0x0379
#define plNetServerMsgRequestAccountPlayerList 0x037A
#define plNetServerMsgAccountPlayerList 0x037B
#define plNetMsgPlayerCreated 0x037C
#define plNetServerMsgVaultCreatePlayer 0x037D
#define plNetServerMsgVaultPlayerCreated 0x037E
#define plNetMsgFindAge 0x037F
#define plNetMsgFindAgeReply 0x0380
#define plNetClientConnectPrepTask 0x0381
#define plNetClientAuthTask 0x0382
#define plNetClientGetPlayerVaultTask 0x0383
#define plNetClientSetActivePlayerTask 0x0384
#define plNetClientFindAgeTask 0x0385
#define plNetClientLeaveTask 0x0386
#define plNetClientJoinTask 0x0387
#define plNetClientCalibrateTask 0x0388
#define plNetMsgDeletePlayer 0x0389
#define plNetServerMsgVaultDeletePlayer 0x038A
#define plNetCoreStatsSummary 0x038B
#define plCreatableGenericValue 0x038C
#define plCreatableListHelper 0x038D
#define plCreatableStream 0x038E
#define plAvBrainGenericMsg 0x038F
#define plAvTaskSeek 0x0390
#define plAGInstanceCallbackMsg 0x0391
#define plArmatureEffectMsg 0x0392
#define plArmatureEffectStateMsg 0x0393
#define plShadowCastMsg 0x0394
#define plBoundsIsect 0x0395
#define plResMgrHelperMsg 0x0396
#define plNetCommAuthMsg 0x0397
#define plNetCommFileListMsg 0x0398
#define plNetCommFileDownloadMsg 0x0399
#define plNetCommLinkToAgeMsg 0x039A
#define plNetCommPlayerListMsg 0x039B
#define plNetCommActivePlayerMsg 0x039C
#define plNetCommCreatePlayerMsg 0x039D
#define plNetCommDeletePlayerMsg 0x039E
#define plNetCommPublicAgeListMsg 0x039F
#define plNetCommPublicAgeMsg 0x03A0
#define plNetCommRegisterAgeMsg 0x03A1
#define plVaultAdminInitializationTask 0x03A2
#define plMultistageModMsg 0x03A3
#define plSoundVolumeApplicator 0x03A4
#define plCutter 0x03A5
#define plBulletMsg 0x03A6
#define plDynaDecalEnableMsg 0x03A7
#define plOmniCutoffApplicator 0x03A8
#define plArmatureUpdateMsg 0x03A9
#define plAvatarFootMsg 0x03AA
#define plNetOwnershipMsg 0x03AB
#define plNetMsgRelevanceRegions 0x03AC
#define plParticleFlockMsg 0x03AD
#define plAvatarBehaviorNotifyMsg 0x03AE
#define plATCChannel 0x03AF
#define plScalarSDLChannel 0x03B0
#define plLoadAvatarMsg 0x03B1
#define plAvatarSetTypeMsg 0x03B2
#define plNetMsgLoadClone 0x03B3
#define plNetMsgPlayerPage 0x03B4
#define plVNodeInitTask 0x03B5
#define plRippleShapeMsg 0x03B6
#define plEventManager 0x03B7
#define plVaultNeighborhoodInitializationTask 0x03B8
#define plNetServerMsgAgentRecoveryRequest 0x03B9
#define plNetServerMsgFrontendRecoveryRequest 0x03BA
#define plNetServerMsgBackendRecoveryRequest 0x03BB
#define plNetServerMsgAgentRecoveryData 0x03BC
#define plNetServerMsgFrontendRecoveryData 0x03BD
#define plNetServerMsgBackendRecoveryData 0x03BE
#define plSubWorldMsg 0x03BF
#define plMatrixDifferenceApp 0x03C0
#define plAvatarSpawnNotifyMsg 0x03C1

#define plVaultGameServerInitializationTask 0x0427
#define plNetClientFindDefaultAgeTask 0x0428
#define plVaultAgeNode 0x0429
#define plVaultAgeInitializationTask 0x042A
#define plSetListenerMsg 0x042B
#define plVaultSystemNode 0x042C
#define plAvBrainSwim 0x042D
#define plNetMsgVault 0x042E
#define plNetServerMsgVault 0x042F
#define plVaultTask 0x0430
#define plVaultConnectTask 0x0431
#define plVaultNegotiateManifestTask 0x0432
#define plVaultFetchNodesTask 0x0433
#define plVaultSaveNodeTask 0x0434
#define plVaultFindNodeTask 0x0435
#define plVaultAddNodeRefTask 0x0436
#define plVaultRemoveNodeRefTask 0x0437
#define plVaultSendNodeTask 0x0438
#define plVaultNotifyOperationCallbackTask 0x0439
#define plVNodeMgrInitializationTask 0x043A
#define plVaultPlayerInitializationTask 0x043B
#define plNetVaultServerInitializationTask 0x043C
#define plCommonNeighborhoodsInitTask 0x043D
#define plVaultNodeRef 0x043E
#define plVaultNode 0x043F
#define plVaultFolderNode 0x0440
#define plVaultImageNode 0x0441
#define plVaultTextNoteNode 0x0442
#define plVaultSDLNode 0x0443
#define plVaultAgeLinkNode 0x0444
#define plVaultChronicleNode 0x0445
#define plVaultPlayerInfoNode 0x0446
#define plVaultMgrNode 0x0447
#define plVaultPlayerNode 0x0448
#define plSynchEnableMsg 0x0449
#define plNetVaultServerNode 0x044A
#define plVaultAdminNode 0x044B
#define plVaultGameServerNode 0x044C
#define plVaultPlayerInfoListNode 0x044D
#define plAvatarStealthModeMsg 0x044E
#define plEventCallbackInterceptMsg 0x044F
#define plDynamicEnvMapMsg 0x0450
#define plClimbMsg 0x0451
#define plIfaceFadeAvatarMsg 0x0452
#define plAvBrainClimb 0x0453
#define plSharedMeshBCMsg 0x0454
#define plNetVoiceListMsg 0x0455
#define plSwimMsg 0x0456
#define plMorphDelta 0x0457
#define plMatrixControllerCacheChannel 0x0458
#define plVaultMarkerNode 0x0459
#define pfMarkerMsg 0x045A
#define plPipeResMakeMsg 0x045B
#define plPipeRTMakeMsg 0x045C
#define plPipeGeoMakeMsg 0x045D
#define plAvCoopMsg 0x045E
#define plAvBrainCoop 0x045F
#define plSimSuppressMsg 0x0460
#define plVaultMarkerListNode 0x0461
#define UNUSED_plAvTaskOrient 0x0462
#define plAgeBeginLoadingMsg 0x0463
#define plSetNetGroupIDMsg 0x0464
#define pfBackdoorMsg 0x0465
#define plAIMsg 0x0466
#define plAIBrainCreatedMsg 0x0467
#define plStateDataRecord 0x0468
#define plNetClientCommDeletePlayerTask 0x0469
#define plNetMsgSetTimeout 0x046A
#define plNetMsgActivePlayerSet 0x046B
#define plNetClientCommSetTimeoutTask 0x046C
#define plNetRoutableMsgOmnibus 0x046D
#define plNetMsgGetPublicAgeList 0x046E
#define plNetMsgPublicAgeList 0x046F
#define plNetMsgCreatePublicAge 0x0470
#define plNetMsgPublicAgeCreated 0x0471
#define plNetServerMsgEnvelope 0x0472
#define plNetClientCommGetPublicAgeListTask 0x0473
#define plNetClientCommCreatePublicAgeTask 0x0474
#define plNetServerMsgPendingMsgs 0x0475
#define plNetServerMsgRequestPendingMsgs 0x0476
#define plDbInterface 0x0477
#define plDbProxyInterface 0x0478
#define plDBGenericSQLDB 0x0479
#define pfGameMgrMsg 0x047A
#define pfGameCliMsg 0x047B
#define pfGameCli 0x047C
#define pfGmTicTacToe 0x047D
#define pfGmHeek 0x047E
#define pfGmMarker 0x047F
#define pfGmBlueSpiral 0x0480
#define pfGmClimbingWall 0x0481
#define plAIArrivedAtGoalMsg 0x0482
#define pfGmVarSync 0x0483
#define plNetMsgRemovePublicAge 0x0484
#define plNetMsgPublicAgeRemoved 0x0485
#define plNetClientCommRemovePublicAgeTask 0x0486
#define plCCRMessage 0x0487
#define plAvOneShotLinkTask 0x0488
#define plNetAuthDatabase 0x0489
#define plAvatarOpacityCallbackMsg 0x048A
#define plAGDetachCallbackMsg 0x048B
#define pfMovieEventMsg 0x048C
#define plMovieMsg 0x048D
#define plPipeTexMakeMsg 0x048E
#define plEventLog 0x048F
#define plDbEventLog 0x0490
#define plSyslogEventLog 0x0491
#define plCaptureRenderMsg 0x0492
#define plAgeLoaded2Msg 0x0493
#define plPseudoLinkEffectMsg 0x0494
#define plPseudoLinkAnimTriggerMsg 0x0495
#define plPseudoLinkAnimCallbackMsg 0x0496
#define __UNUSED__pfClimbingWallMsg 0x0497
#define plClimbEventMsg 0x0498
#define __UNUSED__plAvBrainQuab 0x0499
#define plAccountUpdateMsg 0x049A
#define plLinearVelocityMsg 0x049B
#define plAngularVelocityMsg 0x049C
#define plRideAnimatedPhysMsg 0x049D
#define plAvBrainRideAnimatedPhysical 0x049E

#endif /* _TYPECODES_H_ */
