#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_RTM_Result
struct GP_RTM_Result_t230;
// System.String
struct String_t;
// GP_GamesStatusCodes
#include "AssemblyU2DCSharp_GP_GamesStatusCodes.h"

// System.Void GP_RTM_Result::.ctor(System.String,System.String)
extern "C" void GP_RTM_Result__ctor_m1344 (GP_RTM_Result_t230 * __this, String_t* ___r_status, String_t* ___r_roomId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_GamesStatusCodes GP_RTM_Result::get_status()
extern "C" int32_t GP_RTM_Result_get_status_m1345 (GP_RTM_Result_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GP_RTM_Result::get_roomId()
extern "C" String_t* GP_RTM_Result_get_roomId_m1346 (GP_RTM_Result_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
