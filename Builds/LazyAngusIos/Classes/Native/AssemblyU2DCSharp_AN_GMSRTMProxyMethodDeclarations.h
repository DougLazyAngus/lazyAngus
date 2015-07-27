#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GMSRTMProxy
struct AN_GMSRTMProxy_t128;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t581;
// System.String[]
struct StringU5BU5D_t45;
// System.Int32[]
struct Int32U5BU5D_t495;

// System.Void AN_GMSRTMProxy::.ctor()
extern "C" void AN_GMSRTMProxy__ctor_m860 (AN_GMSRTMProxy_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSRTMProxy_CallActivityFunction_m861 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t581* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.Int32,System.Int32,System.String[])
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m862 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t45* ___pIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.String[])
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m863 (Object_t * __this /* static, unused */, StringU5BU5D_t45* ___pIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::sendDataToAll(System.String,System.Int32)
extern "C" void AN_GMSRTMProxy_sendDataToAll_m864 (Object_t * __this /* static, unused */, String_t* ___data, int32_t ___sendType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::sendDataToPlayers(System.String,System.String,System.Int32)
extern "C" void AN_GMSRTMProxy_sendDataToPlayers_m865 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___players, int32_t ___sendType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::ShowWaitingRoomIntent()
extern "C" void AN_GMSRTMProxy_ShowWaitingRoomIntent_m866 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::InvitePlayers(System.Int32,System.Int32)
extern "C" void AN_GMSRTMProxy_InvitePlayers_m867 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_SetVariant(System.Int32)
extern "C" void AN_GMSRTMProxy_RTM_SetVariant_m868 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_SetExclusiveBitMask(System.Int32)
extern "C" void AN_GMSRTMProxy_RTM_SetExclusiveBitMask_m869 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_AcceptInvitation(System.String)
extern "C" void AN_GMSRTMProxy_RTM_AcceptInvitation_m870 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_DeclineInvitation(System.String)
extern "C" void AN_GMSRTMProxy_RTM_DeclineInvitation_m871 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::RTM_DismissInvitation(System.String)
extern "C" void AN_GMSRTMProxy_RTM_DismissInvitation_m872 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_AcceptInvitation(System.String)
extern "C" void AN_GMSRTMProxy_TBM_AcceptInvitation_m873 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_DeclineInvitation(System.String)
extern "C" void AN_GMSRTMProxy_TBM_DeclineInvitation_m874 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_DismissInvitation(System.String)
extern "C" void AN_GMSRTMProxy_TBM_DismissInvitation_m875 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_CreateMatch(System.Int32,System.Int32,System.String[])
extern "C" void AN_GMSRTMProxy_TBM_CreateMatch_m876 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t45* ___playersIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::CancelMatch(System.String)
extern "C" void AN_GMSRTMProxy_CancelMatch_m877 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::DismissMatch(System.String)
extern "C" void AN_GMSRTMProxy_DismissMatch_m878 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_FinishMatch(System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern "C" void AN_GMSRTMProxy_TBM_FinishMatch_m879 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, StringU5BU5D_t45* ___pIds, Int32U5BU5D_t495* ___results, Int32U5BU5D_t495* ___placing, Int32U5BU5D_t495* ___versions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LeaveMatch(System.String)
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatch_m880 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LeaveMatchDuringTurn(System.String,System.String)
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatchDuringTurn_m881 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___pendingParticipantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LoadMatchInfo(System.String)
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchInfo_m882 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LoadMatchesInfo(System.Int32,System.Int32[])
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchesInfo_m883 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, Int32U5BU5D_t495* ___matchTurnStatuses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_LoadAllMatchesInfo(System.Int32)
extern "C" void AN_GMSRTMProxy_TBM_LoadAllMatchesInfo_m884 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_Rematch(System.String)
extern "C" void AN_GMSRTMProxy_TBM_Rematch_m885 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_RegisterMatchUpdateListener()
extern "C" void AN_GMSRTMProxy_TBM_RegisterMatchUpdateListener_m886 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_UnregisterMatchUpdateListener()
extern "C" void AN_GMSRTMProxy_TBM_UnregisterMatchUpdateListener_m887 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_TakeTrun(System.String,System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern "C" void AN_GMSRTMProxy_TBM_TakeTrun_m888 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, String_t* ___pendingParticipantId, StringU5BU5D_t45* ___pIds, Int32U5BU5D_t495* ___results, Int32U5BU5D_t495* ___placing, Int32U5BU5D_t495* ___versions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::StartSelectOpponentsView(System.Int32,System.Int32,System.Boolean)
extern "C" void AN_GMSRTMProxy_StartSelectOpponentsView_m889 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, bool ___allowAutomatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_ShowInbox()
extern "C" void AN_GMSRTMProxy_TBM_ShowInbox_m890 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_SetVariant(System.Int32)
extern "C" void AN_GMSRTMProxy_TBM_SetVariant_m891 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSRTMProxy::TBM_SetExclusiveBitMask(System.Int32)
extern "C" void AN_GMSRTMProxy_TBM_SetExclusiveBitMask_m892 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
