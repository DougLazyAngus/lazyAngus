#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t5234;
// System.Threading.CompressedStack
struct CompressedStack_t5233;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m23192 (SecurityContext_t5234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m23193 (SecurityContext_t5234 * __this, SecurityContext_t5234 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t5234 * SecurityContext_Capture_m23194 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m23195 (SecurityContext_t5234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t5233 * SecurityContext_get_CompressedStack_m23196 (SecurityContext_t5234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
