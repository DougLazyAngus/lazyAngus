#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t2604;
// System.Threading.CompressedStack
struct CompressedStack_t2603;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m14384 (SecurityContext_t2604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m14385 (SecurityContext_t2604 * __this, SecurityContext_t2604 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t2604 * SecurityContext_Capture_m14386 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m14387 (SecurityContext_t2604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t2603 * SecurityContext_get_CompressedStack_m14388 (SecurityContext_t2604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
