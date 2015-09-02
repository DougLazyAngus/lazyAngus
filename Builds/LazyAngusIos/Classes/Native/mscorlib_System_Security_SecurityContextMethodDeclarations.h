#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t4751;
// System.Threading.CompressedStack
struct CompressedStack_t4750;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m19091 (SecurityContext_t4751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m19092 (SecurityContext_t4751 * __this, SecurityContext_t4751 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t4751 * SecurityContext_Capture_m19093 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m19094 (SecurityContext_t4751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t4750 * SecurityContext_get_CompressedStack_m19095 (SecurityContext_t4751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
