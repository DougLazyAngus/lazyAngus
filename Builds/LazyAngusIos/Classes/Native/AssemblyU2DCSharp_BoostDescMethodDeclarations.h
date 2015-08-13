#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostDesc
struct BoostDesc_t512;
// System.String
struct String_t;
// TipConfig
struct TipConfig_t511;

// System.Void BoostDesc::.ctor(System.String,System.String,System.String,System.Single,TipConfig)
extern "C" void BoostDesc__ctor_m2809 (BoostDesc_t512 * __this, String_t* ___boostName, String_t* ___buttonImageName, String_t* ___introScreenImageName, float ___effectiveTime, TipConfig_t511 * ___tipConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
