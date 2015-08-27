#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t4735;
// System.Threading.CompressedStack
struct CompressedStack_t4734;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m18962 (SecurityContext_t4735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m18963 (SecurityContext_t4735 * __this, SecurityContext_t4735 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t4735 * SecurityContext_Capture_m18964 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m18965 (SecurityContext_t4735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t4734 * SecurityContext_get_CompressedStack_m18966 (SecurityContext_t4735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
