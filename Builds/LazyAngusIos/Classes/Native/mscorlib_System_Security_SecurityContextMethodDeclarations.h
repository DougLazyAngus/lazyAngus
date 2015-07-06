#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t2626;
// System.Threading.CompressedStack
struct CompressedStack_t2625;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m14532 (SecurityContext_t2626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m14533 (SecurityContext_t2626 * __this, SecurityContext_t2626 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t2626 * SecurityContext_Capture_m14534 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m14535 (SecurityContext_t2626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t2625 * SecurityContext_get_CompressedStack_m14536 (SecurityContext_t2626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
