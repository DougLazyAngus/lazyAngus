﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream/ReadDelegate
struct ReadDelegate_t2455;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ReadDelegate__ctor_m13740 (ReadDelegate_t2455 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ReadDelegate_Invoke_m13741 (ReadDelegate_t2455 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" int32_t pinvoke_delegate_wrapper_ReadDelegate_t2455(Il2CppObject* delegate, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.FileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ReadDelegate_BeginInvoke_m13742 (ReadDelegate_t2455 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern "C" int32_t ReadDelegate_EndInvoke_m13743 (ReadDelegate_t2455 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
