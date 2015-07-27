﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_RTM_Room
struct GP_RTM_Room_t192;
// GP_Participant
struct GP_Participant_t186;
// System.String
struct String_t;

// System.Void GP_RTM_Room::.ctor()
extern "C" void GP_RTM_Room__ctor_m1074 (GP_RTM_Room_t192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_RTM_Room::AddParticipant(GP_Participant)
extern "C" void GP_RTM_Room_AddParticipant_m1075 (GP_RTM_Room_t192 * __this, GP_Participant_t186 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Participant GP_RTM_Room::GetParticipantById(System.String)
extern "C" GP_Participant_t186 * GP_RTM_Room_GetParticipantById_m1076 (GP_RTM_Room_t192 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
