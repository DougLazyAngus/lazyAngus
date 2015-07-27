﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t1962;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
extern "C" void WriteMethod__ctor_m9905 (WriteMethod_t1962 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" void WriteMethod_Invoke_m9906 (WriteMethod_t1962 * __this, ByteU5BU5D_t36* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" void pinvoke_delegate_wrapper_WriteMethod_t1962(Il2CppObject* delegate, ByteU5BU5D_t36* ___array, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WriteMethod_BeginInvoke_m9907 (WriteMethod_t1962 * __this, ByteU5BU5D_t36* ___array, int32_t ___offset, int32_t ___count, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
extern "C" void WriteMethod_EndInvoke_m9908 (WriteMethod_t1962 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
