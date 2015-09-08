#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.TraceSourceInfo
struct TraceSourceInfo_t4291;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4287;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t4284;
// System.Diagnostics.SourceLevels
#include "System_System_Diagnostics_SourceLevels.h"

// System.Void System.Diagnostics.TraceSourceInfo::.ctor(System.String,System.Diagnostics.SourceLevels,System.Diagnostics.TraceImplSettings)
extern "C" void TraceSourceInfo__ctor_m16111 (TraceSourceInfo_t4291 * __this, String_t* ___name, int32_t ___levels, TraceImplSettings_t4284 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSourceInfo::get_Name()
extern "C" String_t* TraceSourceInfo_get_Name_m16112 (TraceSourceInfo_t4291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::get_Listeners()
extern "C" TraceListenerCollection_t4287 * TraceSourceInfo_get_Listeners_m16113 (TraceSourceInfo_t4291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
