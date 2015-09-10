#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.TraceListener
struct TraceListener_t4291;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t4228;
// System.String[]
struct StringU5BU5D_t75;
// System.Diagnostics.TraceOptions
#include "System_System_Diagnostics_TraceOptions.h"

// System.Void System.Diagnostics.TraceListener::.ctor(System.String)
extern "C" void TraceListener__ctor_m16158 (TraceListener_t4291 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentLevel(System.Int32)
extern "C" void TraceListener_set_IndentLevel_m16159 (TraceListener_t4291 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentSize(System.Int32)
extern "C" void TraceListener_set_IndentSize_m16160 (TraceListener_t4291 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceListener::get_Name()
extern "C" String_t* TraceListener_get_Name_m16161 (TraceListener_t4291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_Name(System.String)
extern "C" void TraceListener_set_Name_m16162 (TraceListener_t4291 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose()
extern "C" void TraceListener_Dispose_m16163 (TraceListener_t4291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose(System.Boolean)
extern "C" void TraceListener_Dispose_m16164 (TraceListener_t4291 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.TraceListener::GetSupportedAttributes()
extern "C" StringU5BU5D_t75* TraceListener_GetSupportedAttributes_m16165 (TraceListener_t4291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::get_Attributes()
extern "C" StringDictionary_t4228 * TraceListener_get_Attributes_m16166 (TraceListener_t4291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_TraceOutputOptions(System.Diagnostics.TraceOptions)
extern "C" void TraceListener_set_TraceOutputOptions_m16167 (TraceListener_t4291 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
