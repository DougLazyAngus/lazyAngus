#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t4317;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.SafeHandles.SafeWaitHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" void SafeWaitHandle__ctor_m16042 (SafeWaitHandle_t4317 * __this, IntPtr_t ___existingHandle, bool ___ownsHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.SafeHandles.SafeWaitHandle::ReleaseHandle()
extern "C" bool SafeWaitHandle_ReleaseHandle_m16043 (SafeWaitHandle_t4317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
