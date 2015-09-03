#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBDebug
struct FBDebug_t429;
// System.String
struct String_t;

// System.Void FBDebug::Log(System.String)
extern "C" void FBDebug_Log_m2289 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBDebug::Info(System.String)
extern "C" void FBDebug_Info_m2290 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBDebug::Warn(System.String)
extern "C" void FBDebug_Warn_m2291 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBDebug::Error(System.String)
extern "C" void FBDebug_Error_m2292 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
