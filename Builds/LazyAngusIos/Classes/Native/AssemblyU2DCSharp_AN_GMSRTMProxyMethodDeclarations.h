#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GMSRTMProxy
struct AN_GMSRTMProxy_t170;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t636;
// System.String[]
struct StringU5BU5D_t75;
// System.Int32[]
struct Int32U5BU5D_t547;

// System.Void AN_GMSRTMProxy::.ctor()
extern "C" void AN_GMSRTMProxy__ctor_m1133 (AN_GMSRTMProxy_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSRTMProxy_CallActivityFunction_m1134 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t636* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.Int32,System.Int32,System.String[])
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m1135 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t75* ___pIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.String[])
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m1136 (Object_t * __this /* static, unused */, StringU5BU5D_t75* ___pIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::sendDataToAll(System.String,System.Int32)
extern "C" void AN_GMSRTMProxy_sendDataToAll_m1137 (Object_t * __this /* static, unused */, String_t* ___data, int32_t ___sendType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::sendDataToPlayers(System.String,System.String,System.Int32)
extern "C" void AN_GMSRTMProxy_sendDataToPlayers_m1138 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___players, int32_t ___sendType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::ShowWaitingRoomIntent()
extern "C" void AN_GMSRTMProxy_ShowWaitingRoomIntent_m1139 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::InvitePlayers(System.Int32,System.Int32)
extern "C" void AN_GMSRTMProxy_InvitePlayers_m1140 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_SetVariant(System.Int32)
extern "C" void AN_GMSRTMProxy_RTM_SetVariant_m1141 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_SetExclusiveBitMask(System.Int32)
extern "C" void AN_GMSRTMProxy_RTM_SetExclusiveBitMask_m1142 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_AcceptInvitation(System.String)
extern "C" void AN_GMSRTMProxy_RTM_AcceptInvitation_m1143 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_DeclineInvitation(System.String)
extern "C" void AN_GMSRTMProxy_RTM_DeclineInvitation_m1144 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_DismissInvitation(System.String)
extern "C" void AN_GMSRTMProxy_RTM_DismissInvitation_m1145 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_AcceptInvitation(System.String)
extern "C" void AN_GMSRTMProxy_TBM_AcceptInvitation_m1146 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_DeclineInvitation(System.String)
extern "C" void AN_GMSRTMProxy_TBM_DeclineInvitation_m1147 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_DismissInvitation(System.String)
extern "C" void AN_GMSRTMProxy_TBM_DismissInvitation_m1148 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_CreateMatch(System.Int32,System.Int32,System.String[])
extern "C" void AN_GMSRTMProxy_TBM_CreateMatch_m1149 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t75* ___playersIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::CancelMatch(System.String)
extern "C" void AN_GMSRTMProxy_CancelMatch_m1150 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::DismissMatch(System.String)
extern "C" void AN_GMSRTMProxy_DismissMatch_m1151 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_FinishMatch(System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern "C" void AN_GMSRTMProxy_TBM_FinishMatch_m1152 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, StringU5BU5D_t75* ___pIds, Int32U5BU5D_t547* ___results, Int32U5BU5D_t547* ___placing, Int32U5BU5D_t547* ___versions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LeaveMatch(System.String)
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatch_m1153 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LeaveMatchDuringTurn(System.String,System.String)
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatchDuringTurn_m1154 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___pendingParticipantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LoadMatchInfo(System.String)
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchInfo_m1155 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LoadMatchesInfo(System.Int32,System.Int32[])
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchesInfo_m1156 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, Int32U5BU5D_t547* ___matchTurnStatuses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LoadAllMatchesInfo(System.Int32)
extern "C" void AN_GMSRTMProxy_TBM_LoadAllMatchesInfo_m1157 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_Rematch(System.String)
extern "C" void AN_GMSRTMProxy_TBM_Rematch_m1158 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_RegisterMatchUpdateListener()
extern "C" void AN_GMSRTMProxy_TBM_RegisterMatchUpdateListener_m1159 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_UnregisterMatchUpdateListener()
extern "C" void AN_GMSRTMProxy_TBM_UnregisterMatchUpdateListener_m1160 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_TakeTrun(System.String,System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern "C" void AN_GMSRTMProxy_TBM_TakeTrun_m1161 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, String_t* ___pendingParticipantId, StringU5BU5D_t75* ___pIds, Int32U5BU5D_t547* ___results, Int32U5BU5D_t547* ___placing, Int32U5BU5D_t547* ___versions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::StartSelectOpponentsView(System.Int32,System.Int32,System.Boolean)
extern "C" void AN_GMSRTMProxy_StartSelectOpponentsView_m1162 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, bool ___allowAutomatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_ShowInbox()
extern "C" void AN_GMSRTMProxy_TBM_ShowInbox_m1163 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_SetVariant(System.Int32)
extern "C" void AN_GMSRTMProxy_TBM_SetVariant_m1164 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_SetExclusiveBitMask(System.Int32)
extern "C" void AN_GMSRTMProxy_TBM_SetExclusiveBitMask_m1165 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
