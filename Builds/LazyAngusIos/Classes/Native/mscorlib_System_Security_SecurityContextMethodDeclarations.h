#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t4688;
// System.Threading.CompressedStack
struct CompressedStack_t4687;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m18684 (SecurityContext_t4688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m18685 (SecurityContext_t4688 * __this, SecurityContext_t4688 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t4688 * SecurityContext_Capture_m18686 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m18687 (SecurityContext_t4688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t4687 * SecurityContext_get_CompressedStack_m18688 (SecurityContext_t4688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
