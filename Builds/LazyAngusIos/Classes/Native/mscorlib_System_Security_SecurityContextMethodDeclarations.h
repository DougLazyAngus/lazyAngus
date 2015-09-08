#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t5238;
// System.Threading.CompressedStack
struct CompressedStack_t5237;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m23205 (SecurityContext_t5238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m23206 (SecurityContext_t5238 * __this, SecurityContext_t5238 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t5238 * SecurityContext_Capture_m23207 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m23208 (SecurityContext_t5238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t5237 * SecurityContext_get_CompressedStack_m23209 (SecurityContext_t5238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
