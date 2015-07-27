#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t2705;
// System.Threading.CompressedStack
struct CompressedStack_t2704;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m15298 (SecurityContext_t2705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m15299 (SecurityContext_t2705 * __this, SecurityContext_t2705 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t2705 * SecurityContext_Capture_m15300 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m15301 (SecurityContext_t2705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t2704 * SecurityContext_get_CompressedStack_m15302 (SecurityContext_t2705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
