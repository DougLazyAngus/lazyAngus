﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream/WriteDelegate
struct WriteDelegate_t2378;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void WriteDelegate__ctor_m12981 (WriteDelegate_t2378 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" void WriteDelegate_Invoke_m12982 (WriteDelegate_t2378 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t2378(Il2CppObject* delegate, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.FileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WriteDelegate_BeginInvoke_m12983 (WriteDelegate_t2378 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C" void WriteDelegate_EndInvoke_m12984 (WriteDelegate_t2378 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;