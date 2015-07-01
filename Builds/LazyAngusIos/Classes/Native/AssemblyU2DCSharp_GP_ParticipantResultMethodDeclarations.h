#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_ParticipantResult
struct GP_ParticipantResult_t159;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t45;

// System.Void GP_ParticipantResult::.ctor(System.String,System.Int32,System.Int32)
extern "C" void GP_ParticipantResult__ctor_m658 (GP_ParticipantResult_t159 * __this, String_t* ___participantId, int32_t ___result, int32_t ___placing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_ParticipantResult::.ctor(System.Int32,System.String,System.Int32,System.Int32)
extern "C" void GP_ParticipantResult__ctor_m659 (GP_ParticipantResult_t159 * __this, int32_t ___versionCode, String_t* ___participantId, int32_t ___result, int32_t ___placing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_ParticipantResult::.ctor(System.String[],System.Int32)
extern "C" void GP_ParticipantResult__ctor_m660 (GP_ParticipantResult_t159 * __this, StringU5BU5D_t45* ___data, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GP_ParticipantResult::get_Placing()
extern "C" int32_t GP_ParticipantResult_get_Placing_m661 (GP_ParticipantResult_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GP_ParticipantResult::get_Result()
extern "C" int32_t GP_ParticipantResult_get_Result_m662 (GP_ParticipantResult_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GP_ParticipantResult::get_VersionCode()
extern "C" int32_t GP_ParticipantResult_get_VersionCode_m663 (GP_ParticipantResult_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GP_ParticipantResult::get_ParticipantId()
extern "C" String_t* GP_ParticipantResult_get_ParticipantId_m664 (GP_ParticipantResult_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
