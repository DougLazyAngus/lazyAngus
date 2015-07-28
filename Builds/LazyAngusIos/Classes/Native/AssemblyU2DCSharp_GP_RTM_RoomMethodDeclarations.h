#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_RTM_Room
struct GP_RTM_Room_t232;
// GP_Participant
struct GP_Participant_t226;
// System.String
struct String_t;

// System.Void GP_RTM_Room::.ctor()
extern "C" void GP_RTM_Room__ctor_m1345 (GP_RTM_Room_t232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_RTM_Room::AddParticipant(GP_Participant)
extern "C" void GP_RTM_Room_AddParticipant_m1346 (GP_RTM_Room_t232 * __this, GP_Participant_t226 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Participant GP_RTM_Room::GetParticipantById(System.String)
extern "C" GP_Participant_t226 * GP_RTM_Room_GetParticipantById_m1347 (GP_RTM_Room_t232 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
