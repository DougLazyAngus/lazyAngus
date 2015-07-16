﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t2651;
// System.Threading.CompressedStack
struct CompressedStack_t2650;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m14712 (SecurityContext_t2651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m14713 (SecurityContext_t2651 * __this, SecurityContext_t2651 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t2651 * SecurityContext_Capture_m14714 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m14715 (SecurityContext_t2651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t2650 * SecurityContext_get_CompressedStack_m14716 (SecurityContext_t2651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
