#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_RTM_Room
struct GP_RTM_Room_t163;
// GP_Participant
struct GP_Participant_t157;
// System.String
struct String_t;

// System.Void GP_RTM_Room::.ctor()
extern "C" void GP_RTM_Room__ctor_m672 (GP_RTM_Room_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_RTM_Room::AddParticipant(GP_Participant)
extern "C" void GP_RTM_Room_AddParticipant_m673 (GP_RTM_Room_t163 * __this, GP_Participant_t157 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Participant GP_RTM_Room::GetParticipantById(System.String)
extern "C" GP_Participant_t157 * GP_RTM_Room_GetParticipantById_m674 (GP_RTM_Room_t163 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
