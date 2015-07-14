#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_Participant
struct GP_Participant_t157;
// System.String
struct String_t;
// GP_ParticipantResult
struct GP_ParticipantResult_t159;
// GP_RTM_ParticipantStatus
#include "AssemblyU2DCSharp_GP_RTM_ParticipantStatus.h"

// System.Void GP_Participant::.ctor(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void GP_Participant__ctor_m649 (GP_Participant_t157 * __this, String_t* ___uid, String_t* ___playerUid, String_t* ___stat, String_t* ___hiResImg, String_t* ___IconImg, String_t* ___Name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Participant::SetResult(GP_ParticipantResult)
extern "C" void GP_Participant_SetResult_m650 (GP_Participant_t157 * __this, GP_ParticipantResult_t159 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GP_Participant::get_id()
extern "C" String_t* GP_Participant_get_id_m651 (GP_Participant_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GP_Participant::get_playerId()
extern "C" String_t* GP_Participant_get_playerId_m652 (GP_Participant_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GP_Participant::get_HiResImageUrl()
extern "C" String_t* GP_Participant_get_HiResImageUrl_m653 (GP_Participant_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GP_Participant::get_IconImageUrl()
extern "C" String_t* GP_Participant_get_IconImageUrl_m654 (GP_Participant_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GP_Participant::get_DisplayName()
extern "C" String_t* GP_Participant_get_DisplayName_m655 (GP_Participant_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_RTM_ParticipantStatus GP_Participant::get_Status()
extern "C" int32_t GP_Participant_get_Status_m656 (GP_Participant_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_ParticipantResult GP_Participant::get_Result()
extern "C" GP_ParticipantResult_t159 * GP_Participant_get_Result_m657 (GP_Participant_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
