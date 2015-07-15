#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GMSRTMProxy
struct AN_GMSRTMProxy_t101;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t533;
// System.String[]
struct StringU5BU5D_t45;
// System.Int32[]
struct Int32U5BU5D_t456;

// System.Void AN_GMSRTMProxy::.ctor()
extern "C" void AN_GMSRTMProxy__ctor_m504 (AN_GMSRTMProxy_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSRTMProxy_CallActivityFunction_m505 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t533* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.Int32,System.Int32,System.String[])
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m506 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t45* ___pIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::sendDataToAll(System.String,System.Int32)
extern "C" void AN_GMSRTMProxy_sendDataToAll_m507 (Object_t * __this /* static, unused */, String_t* ___data, int32_t ___sendType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::sendDataToPlayers(System.String,System.String,System.Int32)
extern "C" void AN_GMSRTMProxy_sendDataToPlayers_m508 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___players, int32_t ___sendType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::ShowWaitingRoomIntent()
extern "C" void AN_GMSRTMProxy_ShowWaitingRoomIntent_m509 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::InvitePlayers(System.Int32,System.Int32)
extern "C" void AN_GMSRTMProxy_InvitePlayers_m510 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_SetVariant(System.Int32)
extern "C" void AN_GMSRTMProxy_RTM_SetVariant_m511 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_SetExclusiveBitMask(System.Int32)
extern "C" void AN_GMSRTMProxy_RTM_SetExclusiveBitMask_m512 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_AcceptInvitation(System.String)
extern "C" void AN_GMSRTMProxy_RTM_AcceptInvitation_m513 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_DeclineInvitation(System.String)
extern "C" void AN_GMSRTMProxy_RTM_DeclineInvitation_m514 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_DismissInvitation(System.String)
extern "C" void AN_GMSRTMProxy_RTM_DismissInvitation_m515 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_AcceptInvitation(System.String)
extern "C" void AN_GMSRTMProxy_TBM_AcceptInvitation_m516 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_DeclineInvitation(System.String)
extern "C" void AN_GMSRTMProxy_TBM_DeclineInvitation_m517 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_DismissInvitation(System.String)
extern "C" void AN_GMSRTMProxy_TBM_DismissInvitation_m518 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_CreateMatch(System.Int32,System.Int32,System.String[])
extern "C" void AN_GMSRTMProxy_TBM_CreateMatch_m519 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t45* ___playersIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::CancelMatch(System.String)
extern "C" void AN_GMSRTMProxy_CancelMatch_m520 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::DismissMatch(System.String)
extern "C" void AN_GMSRTMProxy_DismissMatch_m521 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_FinishMatch(System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern "C" void AN_GMSRTMProxy_TBM_FinishMatch_m522 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, StringU5BU5D_t45* ___pIds, Int32U5BU5D_t456* ___results, Int32U5BU5D_t456* ___placing, Int32U5BU5D_t456* ___versions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LeaveMatch(System.String)
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatch_m523 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LeaveMatchDuringTurn(System.String,System.String)
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatchDuringTurn_m524 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___pendingParticipantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LoadMatchInfo(System.String)
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchInfo_m525 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LoadMatchesInfo(System.Int32,System.Int32[])
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchesInfo_m526 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, Int32U5BU5D_t456* ___matchTurnStatuses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LoadAllMatchesInfo(System.Int32)
extern "C" void AN_GMSRTMProxy_TBM_LoadAllMatchesInfo_m527 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_Rematch(System.String)
extern "C" void AN_GMSRTMProxy_TBM_Rematch_m528 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_RegisterMatchUpdateListener()
extern "C" void AN_GMSRTMProxy_TBM_RegisterMatchUpdateListener_m529 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_UnregisterMatchUpdateListener()
extern "C" void AN_GMSRTMProxy_TBM_UnregisterMatchUpdateListener_m530 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_TakeTrun(System.String,System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern "C" void AN_GMSRTMProxy_TBM_TakeTrun_m531 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, String_t* ___pendingParticipantId, StringU5BU5D_t45* ___pIds, Int32U5BU5D_t456* ___results, Int32U5BU5D_t456* ___placing, Int32U5BU5D_t456* ___versions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::StartSelectOpponentsView(System.Int32,System.Int32,System.Boolean)
extern "C" void AN_GMSRTMProxy_StartSelectOpponentsView_m532 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, bool ___allowAutomatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_ShowInbox()
extern "C" void AN_GMSRTMProxy_TBM_ShowInbox_m533 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_SetVariant(System.Int32)
extern "C" void AN_GMSRTMProxy_TBM_SetVariant_m534 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_SetExclusiveBitMask(System.Int32)
extern "C" void AN_GMSRTMProxy_TBM_SetExclusiveBitMask_m535 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
